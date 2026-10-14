# Debugging the browser game

Refresh to load the latest build. Options → Copy diagnostics or Download diagnostics exports a JSON report. The error banner also offers a download when startup fails. Reports stay on this device; there is no telemetry upload.

Reports contain build, timestamps, error source/message/stack, repeat count, the latest 20 button actions, and a small simulation summary (worker phases, stove recipes/timers, visitor count, speed, active panel). They exclude the full save, café name and typed input. Download a save separately when reproducing a state-dependent issue.

The latest 50 errors persist under `zombie-cafe.diagnostics.v1`. Repeated identical errors within a minute increment a counter instead of flooding alerts or the console. Console errors are prefixed `[Zombie Café]`. Reporting still works in memory if storage is unavailable.

Captured paths include uncaught JavaScript exceptions, unhandled promise rejections, resource failures, furniture/food loads, startup, save/import, view preferences, offline-cache downloads, simulation ticks and rendering. Failed simulation ticks stop further automatic ticks and saves; rendering exceptions stop that render loop. Reload after collecting diagnostics to retry. Startup failures leave diagnostics accessible above the loading screen.

If loading a save fails, its original localStorage entry is preserved. A temporary café can render, but automatic saving remains blocked. Import a valid backup or explicitly choose New café to replace that entry. A failed save validation or storage write is reported and does not claim success.

Validation: `npm --prefix web run check` and `npm --prefix web test`. Diagnostic tests cover persistence, bounded history, repeat suppression, storage/callback failures, and global error capture.
