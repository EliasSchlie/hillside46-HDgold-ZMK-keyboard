# Hillside 46 ZMK Config

Split ergonomic keyboard firmware config. See [README.md](README.md) for full documentation: layer maps, behaviors, macros, combos, and build instructions.

## Key Files

- `config/hillside46.keymap` — all layers, macros, behaviors, combos (1100+ lines)
- `config/hillside46.conf` — feature toggles (BT, RGB, sleep, battery)
- `config/german-keymap.h` — German keyboard code mappings

## Conventions

- Mac layers: 0–6. Windows layers: 7–12 (mirrors with `LG()`→`LC()` swaps).
- Home row mods use tap-preferred flavor, 170ms tapping term.
- Symbol layer outputs F-key combos mapped to Unicode via external tool (Karabiner/BTT).
- Umlauts use macOS Alt+U dead-key method.
- Build triggers on push via GitHub Actions (nice_nano//zmk, left + right shields).
