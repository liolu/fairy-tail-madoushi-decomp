# Fairy Tail: Madoushi decompilation (JP)

> **This game moved to [liolu/All-nds-decomp-games](https://github.com/liolu/All-nds-decomp-games/tree/main/games/F/fairy-tail-madoushi)** (`games/F/fairy-tail-madoushi`), with its whole history: every Nintendo DS decompilation in one repository, one game downloadable on its own (`python nds.py get fairy-tail-madoushi`). This repository is archived; issues and pull requests go there.

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/fairy-tail-madoushi-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/fairy-tail-madoushi-decomp) [![Data](https://bytematch.dev/liolu/fairy-tail-madoushi-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/fairy-tail-madoushi-decomp) [![Functions](https://bytematch.dev/liolu/fairy-tail-madoushi-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/fairy-tail-madoushi-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `BH6J`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`█░░░░░░░░░░░░░░░░░░░` **2.55%** of the code matched · data 100.00% · 1361/11097 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 1361 | 1361/1361 | 2.55% |
| Game code: `src/data/` | 6278 | 0/0 | 0.00% |

*Updated 2026-11-17 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py jp
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
