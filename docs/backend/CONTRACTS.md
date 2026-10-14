# Offline backend reconstruction

The simulator is a partial reconstruction from client code, not a captured copy of the original server. No original service was contacted. Response field requirements below are confirmed by parsers; inactive values, zero rewards, Unix-second time, and error code 503 are simulation choices. They have not been validated against an original server response or a running Android client.

## Transport findings

`recovered/java/sources/com/capcom/zombiecafeandroidJP/URLManager.java` implements GET byte responses and multipart POST. Callback 2 uploads `ServerData.dat` as `fnam`; callback 80 uploads `UploadData.dat` as `fnam`; callback 0 uploads `adata.mkt` as `adata`. Other GET requests require HTTP 200. Native builders add version, device/user identifiers and sometimes `h` signatures. Publisher credentials are not required or reproduced by this simulator.

Run `python3 scripts/map_backend.py` to rebuild `reports/backend/endpoint-inventory.json`: 127 URL/endpoint literals with native references. This is an inventory of literals, including ancillary links, not 127 fully decoded API contracts. Ghidra addresses are ELF virtual addresses plus 0x10000.

## Implemented local routes

All routes use localhost, never the original hosts. Query arguments are currently ignored: this is one offline café, without accounts, authentication, purchases, or remote friends. GET is supported; legacy writes return HTTP 501.

| Route | Original service | Confirmed parser contract | Local scenario |
| --- | --- | --- | --- |
| `/v170/jpfiles/getEntry.php` | zc-ad.bij-games.com | `entry` and `vip` are read using getString and then parsed as JSON; entry needs rwd_adways/news_idx, vip needs flg/rk, each converted to integer | Nested JSON strings, all values `"0"` |
| `/pco/zombie/azcjp/v170/getGameInfo.php` | vip.bij-games.com:10080 | hco parsed from getString; integer tiertype/saleid/mc; long starttime/endtime/time; items array with integer type/id/level/zombility/ampoule | No sale, empty items, local clock |
| `/survival/azcjp/getCurrentEvent.php` | zc.minigames.bij-games01.com | Array with mandatory first object containing survival; string eventid/status/title/description/theme/start/end/interval_time/position/butcher/totalbutcher/span; status 1 requires milestones | Status `"0"`, empty milestones |
| `/app/setTransfer.php`, `/app/getTransfer.php` | transfer.jive.bij-cram01.com | String code/title/msg; code below 200 requires pwd/limittime or transferid | Code `"503"`, offline explanation, no issued credentials |
| `/api/offline/status` | New web-only route | Not an original API | Local clock and simulator version/status |

Parser evidence: `CC_Android.java` methods `fromNative_GetEntryParse` (543), `fromNative_GetGameInfoParse` (677), `fromNative_SurvivalParse` (1213), `fromNative_JSONTakeOverDataParse` (795) and `fromNative_JSONTakeOverDataParse2` (820).

## Contracts still under investigation

Native CCServer builders confirm `gettimestamp.php` (callback 7), `versioncheck.php` (6), `playcheck.php` (50), game-state downloads, metadata, gift acknowledgement, and save uploads. Their exact response grammars and binary save layout are not verified. They return explicit HTTP 501, not fabricated success. The central Android_ServerCallback contains a partially recovered jump table, so request discovery does not establish response compatibility.

Reward `GetEventValue.php` expects an object whose entries contain supportid/category/item_id/place/quantity/message; an empty object does not invoke its normal native callback. Therefore it is not casually simulated as `{}`. Ranking, reward consumption, purchase confirmation, push registration and telemetry are not implemented. Remote event schedules and reward balances cannot be recovered from static client code.

## Web integration and persistence

`web/dist/offline-service.js` is the shared responder used directly in-browser and by `web/server.mjs`. Browser startup requests entry/shop information, while the current UI has no online shop/events to display. Game saves go through its validated browser-storage adapter, preserving the existing `zombie-cafe.web.v1` key. Cooking, sales and rewards remain the web model's local simulation. There is no HTTP save API or Android binary save import; do not confuse the web save format with ServerData.dat.

The service worker caches all bundled assets after a successful initial load. Reloading the same localhost URL can then work without a server while the browser retains its cache. First launch still needs `npm --prefix web run dev`. Browser storage/cache removal deletes offline data; use Settings → Export save for backups. The HTTP server binds only 127.0.0.1 and applies a same-origin content security policy. The responder has no network client and never proxies unknown endpoints.

Tests check parser-required shapes, deterministic time, unsupported operations, validated persistence, complete cache files, and gameplay invariants. They are reconstruction tests, not proof of Android interoperability. Next fidelity work: recover native callback response grammars, decode binary save serialization, and then add evidenced response fixtures and local state transitions for gifts/friends/events.
