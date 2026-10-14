import {CUSTOMER_RULES} from './customer-rules.js';
const ordinary=CUSTOMER_RULES.filter(r=>r.weight>0&&r.minLevel<255&&!r.eventOnly&&r.variant!==null);
// Original selection sums eligible record weights, then subtracts them from a
// random draw. Distinct character records may intentionally share human art.
export function eligibleCustomers(level,rating){return ordinary.filter(r=>r.minLevel<=level&&r.minRatingByte/255<=rating);}
export function chooseCustomer(level,rating,random){
 const pool=eligibleCustomers(level,rating),total=pool.reduce((sum,r)=>sum+r.weight,0);
 let ticket=random*total;
 for(const r of pool){ticket-=r.weight;if(ticket<0)return r;}
 return pool.at(-1)||CUSTOMER_RULES[0];
}
