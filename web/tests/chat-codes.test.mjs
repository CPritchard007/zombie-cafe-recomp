import test from 'node:test';
import assert from 'node:assert/strict';
import {applyChatCode} from '../dist/chat-codes.js';
import {initialState,validateSave} from '../dist/model.js';

test('money code adds $500, persists, and respects the balance limit',()=>{
 const state=initialState(),before=state.coins;
 assert.equal(applyChatCode(state,'herecomesthemoney').message,'Added $500.');
 assert.equal(state.coins,before+500);
 assert.equal(validateSave(JSON.parse(JSON.stringify(state)),[]).coins,before+500);
 applyChatCode(state,' /HERECOMESTHEMONEY ');
 assert.equal(state.coins,before+1000);
 state.coins=1e9-100;
 assert.equal(applyChatCode(state,'herecomesthemoney').message,'Added $100.');
 assert.equal(validateSave(state,[]).coins,1e9);
});

test('hidden vial code adds to the balance and survives save validation',()=>{
 const state=initialState();state.toxin=25;
 assert.equal(applyChatCode(state,'utterlyvile').message,'Added 150 toxin vials.');
 assert.equal(state.toxin,175);
 applyChatCode(state,' /UtterlyVile ');
 assert.equal(validateSave(JSON.parse(JSON.stringify(state)),[]).toxin,325);
});
test('ordinary chat and partial codes never alter the game',()=>{
 const state=initialState(),before=structuredClone(state);
 for(const message of ['hello','utterly','utterlyvile please','/unknown','constructor'])assert.equal(applyChatCode(state,message),null);
 assert.deepEqual(state,before);
});
test('vial code respects the save balance limit',()=>{
 const state=initialState();state.toxin=1e9-10;
 applyChatCode(state,'utterlyvile');assert.equal(state.toxin,1e9);
 assert.equal(validateSave(JSON.parse(JSON.stringify(state)),[]).toxin,1e9);
});
