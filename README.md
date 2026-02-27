# Hillside 46 — HD-Vibranium ZMK Config

Split ergonomic keyboard (3x6+5 keys per side) running [ZMK](https://zmk.dev) firmware on nice!nano v2 controllers.

Uses the [HD-Vibranium](https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.eyvjpfoqjy65) key layout — one of the most optimized alternatives to QWERTY.

## Physical Layout

```
 LEFT HAND                                                          RIGHT HAND
┌──────┬──────┬──────┬──────┬──────┬──────┐                ┌──────┬──────┬──────┬──────┬──────┬──────┐
│  0   │  1   │  2   │  3   │  4   │  5   │                │  6   │  7   │  8   │  9   │  10  │  11  │
├──────┼──────┼──────┼──────┼──────┼──────┤                ├──────┼──────┼──────┼──────┼──────┼──────┤
│  12  │  13  │  14  │  15  │  16  │  17  │                │  18  │  19  │  20  │  21  │  22  │  23  │
├──────┼──────┼──────┼──────┼──────┼──────┼──────┐  ┌──────┼──────┼──────┼──────┼──────┼──────┼──────┤
│  24  │  25  │  26  │  27  │  28  │  29  │  30  │  │  31  │  32  │  33  │  34  │  35  │  36  │  37  │
└──────┴──────┴──────┼──────┼──────┼──────┼──────┘  └──────┼──────┼──────┼──────┼──────┴──────┴──────┘
                     │  38  │  39  │  40  │  41  │    │  42  │  43  │  44  │  45  │
                     └──────┴──────┴──────┴──────┘    └──────┴──────┴──────┴──────┘
```

## Layers

17 layers total. Mac layers (0–6) are the primary set; Windows layers (7–12) mirror them with platform-specific modifier swaps.

| # | Name | ID | Purpose |
|---|------|----|---------|
| 0 | Base | `HDVB_L` | HD-Vibranium alpha keys + home row mods |
| 1 | Cursor | `CURSER_L` | Activated after space via oneshot — mostly transparent |
| 2 | Numbers | `NUM_L` | Numpad (left), operators (right) |
| 3 | F-keys | `F_L` | F1–F15, accessed from Num layer thumb |
| 4 | Navigation | `NAV_L` | Arrows, cut/copy/paste, app switching, scroll |
| 5 | Symbols | `SYM_L` | Math/science symbols via F-key combos (mapped externally) |
| 6 | Command | `COM_L` | GUI+layer for app-specific shortcuts |
| 7–12 | Win mirrors | `wHDVB_L`… | Same as 0–6 but `LG()`→`LC()` where needed |
| 13 | Excalidraw | `EXCALI` | Drawing-optimized — numbers + GUI shortcuts; right side returns to base |
| 14 | Umlauts | `UML_L` | Capital Ä, Ö, Ü via macOS Alt+U dead-key method |
| 15 | Scroll | `SCROLL_L` | Vim-style scroll keys (H/J/K/L, G/gg, U/D) |
| 16 | Adjust | `ADJ_L` | Bluetooth, output toggle, brightness, power, bootloader |

---

### Layer 0 — Base (HD-Vibranium, Mac)

```
┌───────┬───────┬───────┬───────┬───────┬───────┐                  ┌───────┬───────┬───────┬───────┬───────┬───────┐
│  / \  │   W   │   X   │   M   │   G   │   J   │                  │  # %  │  . {  │ [ ] ~ │ " *   │ ' @   │HotKey │
├───────┼───────┼───────┼───────┼───────┼───────┤                  ├───────┼───────┼───────┼───────┼───────┼───────┤
│  TAB  │C /Nav │S /Ctrl│N /Alt │T /Gui │K /Shft│                  │  , (  │A /Gui │E /Alt │I /Ctrl│H /Num │ ENTER │
├───────┼───────┼───────┼───────┼───────┼───────┼───────┐  ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤
│   =   │   P   │   F   │   L   │   D   │   V   │  ADJ  │  │ Reset │   -   │   U   │   O   │   Y   │   B   │Excali │
└───────┴───────┴───────┼───────┼───────┼───────┼───────┘  └───────┼───────┼───────┼───────┼───────┴───────┴───────┘
                        │  DEL  │ BSPC  │R /Sym │ Hyper │    │ MEH  │Spc/Sh │SpShft │ Play  │
                        └───────┴───────┴───────┴───────┘    └───────┴───────┴───────┴───────┘
```

**Key behaviors:**
- **Home row mods** (tap-preferred, 170ms): hold a home row key for the modifier shown after `/`
- **`/ \`**: Tap = `/`, Shift = `\` (mod-morph via `b_slsh` macro to fix grave)
- **`. {`**: Tap = `.`, Shift = `{`
- **`" *`**: Tap = `"`, Shift = `*`
- **`' @`**: Tap = `'` (hold wraps selection in quotes), Shift = `@`
- **`, (`**: Tap = `,`, Shift = `(` (hold wraps selection in parens)
- **`[ ] ~`**: Tap = `[`, Shift = `~`, Hold = `]`
- **`R /Sym`**: Tap = `R`, Hold = activate Symbol layer
- **`Spc/Sh`**: Tap = Space + oneshot Cursor layer, Hold = Shift
- **`SpShft`**: Tap = Space, then hold = sticky Shift
- **Hyper / MEH**: Tap sends a unique F-key combo; Hold = Hyper/MEH modifier

**Combos (active on base + Win base):**
| Keys | Output |
|------|--------|
| 1+2 | Z |
| 2+4 | QU (auto-lowercase U) |
| 14+15+16 | ESC |
| 13+14+15+16 | Toggle Excalidraw layer |
| 8+9 | `:` |
| 7+8 | `;` |
| 9+10 | `?` |
| 7+10 | `!` |
| 18+19 | `()` (encloser) |
| 7+9 | Toggle Scroll layer |

---

### Layer 2 — Numbers

```
┌───────┬───────┬───────┬───────┬───────┬───────┐                  ┌───────┬───────┬───────┬───────┬───────┬───────┐
│       │   ^   │   7   │   8   │   9   │   <   │                  │       │   .   │       │       │       │       │
├───────┼───────┼───────┼───────┼───────┼───────┤                  ├───────┼───────┼───────┼───────┼───────┼───────┤
│       │0 /Nav │1 /Ctrl│2 /Alt │3 /Gui │   >   │                  │       │) /Gui │` /Alt │ ² /Ctl│  ---  │       │
├───────┼───────┼───────┼───────┼───────┼───────┼───────┐  ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤
│       │   |   │   4   │   5   │   6   │   $   │       │  │       │       │   &   │   ]   │   ⌥⇧8 │       │       │
└───────┴───────┴───────┼───────┼───────┼───────┼───────┘  └───────┼───────┼───────┼───────┼───────┴───────┴───────┘
                        │       │       │Ret/Sym│       │    │       │Spc/F  │Spc/F  │       │
                        └───────┴───────┴───────┴───────┘    └───────┴───────┴───────┴───────┘
```

- Left hand: numpad layout with home row mods on 0-3
- Thumb: hold Space to access F-key layer

---

### Layer 3 — F-Keys

```
┌───────┬───────┬───────┬───────┬───────┬───────┐                  ┌───────┬───────┬───────┬───────┬───────┬───────┐
│   \   │  F12  │  F7   │  F8   │  F9   │  F13  │                  │   %   │   {   │   ~   │  ⌥⇧8  │       │       │
├───────┼───────┼───────┼───────┼───────┼───────┤                  ├───────┼───────┼───────┼───────┼───────┼───────┤
│ ⇧TAB  │F10/Nav│F1/Ctrl│F2/Alt │F3/Gui │  F14  │                  │   (   │F20/Gui│HotKey │HotKey │  ---  │       │
├───────┼───────┼───────┼───────┼───────┼───────┼───────┐  ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤
│   +   │  F11  │  F4   │  F5   │  F6   │  F15  │       │  │       │   _   │HotKey │HotKey │HotKey │       │       │
└───────┴───────┴───────┼───────┼───────┼───────┼───────┘  └───────┼───────┼───────┼───────┼───────┴───────┴───────┘
                        │       │       │Ret/Sym│       │    │       │       │       │       │
                        └───────┴───────┴───────┴───────┘    └───────┴───────┴───────┴───────┘
```

- Right side: various hyper-key combos mapped to external app actions (Karabiner, BetterTouchTool, etc.)

---

### Layer 4 — Navigation

```
┌───────┬───────┬───────┬───────┬───────┬───────┐                  ┌───────┬───────┬───────┬───────┬───────┬───────┐
│       │       │ ⌘X    │ ⌘C    │ ⌘V    │ ⌘⇧Z   │                  │K_APP  │ ←←←←← │ ↓↓/Fld│ ↑↑/Fld│ →→→→→ │       │
├───────┼───────┼───────┼───────┼───────┼───────┤                  ├───────┼───────┼───────┼───────┼───────┼───────┤
│       │       │F1/Ctrl│F2/Alt │F3/Gui │ ⌘Z    │                  │  F17  │   ←   │   ↓   │   ↑   │   →   │       │
├───────┼───────┼───────┼───────┼───────┼───────┼───────┐  ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤
│       │       │  F4   │ ⌘Q    │ ⌘W    │ ⌘⇧K   │       │  │       │ ⌘A    │ Home  │PgDn/↓▼│PgUp/↑▲│  End  │       │
└───────┴───────┴───────┼───────┼───────┼───────┼───────┘  └───────┼───────┼───────┼───────┼───────┴───────┴───────┘
                        │       │       │Ret/Sym│Scroll │    │ Hyper │Spc/Sh │  TAB  │       │
                        └───────┴───────┴───────┴───────┘    └───────┴───────┴───────┴───────┘
```

- **←←←←←** / **→→→→→**: 5× arrow key macro for fast cursor movement
- **↓↓/Fld** / **↑↑/Fld**: 5× arrow, or code fold toggle with ⌘
- **Home/End**: Alt = switch browser tabs (Ctrl+Tab / Ctrl+Shift+Tab)
- **PgDn/PgUp**: hold for scroll-down/scroll-up acceleration
- **Scroll thumb**: activates Scroll layer + sends hotkey to external app

---

### Layer 5 — Symbols

Outputs math/science Unicode symbols via complex F-key modifier combos. These are mapped through an external tool (e.g., Karabiner-Elements or BetterTouchTool) to produce the actual characters.

```
┌───────┬───────┬───────┬───────┬───────┬───────┐                  ┌───────┬───────┬───────┬───────┬───────┬───────┐
│   ╱   │   ∧   │   ¬   │   ➡   │   ∴   │   ⊥   │                  │   ∑   │   √   │   ≈   │   ²   │       │       │
├───────┼───────┼───────┼───────┼───────┼───────┤                  ├───────┼───────┼───────┼───────┼───────┼───────┤
│  F24  │   ç   │   ß   │   ¬   │   ⟷   │   κ   │                  │   ∂   │   ä   │   ∈   │   ∩   │   ∞   │ ENTER │
├───────┼───────┼───────┼───────┼───────┼───────┼───────┐  ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤
│   ≠   │   ∝   │   ∀   │   λ   │   δ   │   ν   │  ADJ  │  │ Reset │   —   │   ü   │   ö   │   ¥   │   β   │       │
└───────┴───────┴───────┼───────┼───────┼───────┼───────┘  └───────┼───────┼───────┼───────┼───────┴───────┴───────┘
                        │  DEL  │ BSPC  │R /Sym │ Hyper │    │ MEH  │Spc/Scr│SpShft │ Play  │
                        └───────┴───────┴───────┴───────┘    └───────┴───────┴───────┴───────┘
```

- **ä, ö, ü**: Direct umlaut output via macOS Alt+U dead-key macros (shift-aware for capitals)

---

### Layer 6 — Command

Transparent layer activated alongside `⌘` (via `comm_l` macro). Only a few keys are overridden to send app-specific shortcuts.

---

### Layer 13 — Excalidraw

Toggled via 4-key combo (13+14+15+16). Left hand provides numbers + Excalidraw-specific ⌘ shortcuts (Lock `⌘L`, Group `⌘G`, Hyperlink `⌘H`, Paste `⌘V`, Flip `⌘[`/`⌘]`, Find `F`). Right side: every key returns to base layer.

---

### Layer 14 — Capital Umlauts

Provides capital Ä, Ö, Ü in the same positions as the Symbol layer's lowercase umlauts.

---

### Layer 15 — Scroll (Vim-style)

Toggled via combo (7+9). Sends a hotkey to an external app on enter/exit.

```
Left hand: Number pad (same as Num layer)
Right hand:
  Row 0: ↑, D, U, ↓         (scroll directions)
  Row 1: H, J, K, L          (vim movement)
  Row 2: Shift+G, gg          (jump to end/start)
```

---

### Layer 16 — Adjust

System controls:

| Left side | Right side |
|-----------|------------|
| Switch to Mac base (`to 0`) | Brightness up/down |
| Switch to Win base (`to 7`) | Volume up/down/mute |
| BT profile select 0–4 | Print Screen |
| Power / Sleep | USB/BLE output toggle |
| | BT Clear (right inner thumb) |
| | Bootloader (bottom-right corner) |

---

## Behaviors Reference

### Hold-Tap Variants

| Name | ID | Flavor | Tapping Term | Use |
|------|----|--------|-------------|-----|
| Hold-preferred | `h_h` | hold-preferred | 170ms | Hyper/MEH thumb keys |
| Balanced | `h_b` | balanced | 130ms | Win space/shift |
| Tap-preferred | `h_t` | tap-preferred | 100ms | Fast modifiers |
| Homerow mod | `hm` | tap-preferred | 170ms | Alpha + modifier |
| Homerow fast | `hm_f` | hold-preferred | 170ms | Nav layer mods |
| Layer homerow | `hm_l` | tap-preferred | 170ms | Alpha + layer toggle |
| GUI+layer | `gui_l` | tap-preferred | 170ms | Tap=key, Hold=⌘+Command layer |

### Mod-Morphs

Shift changes the output of these keys:

| Behavior | Tap | +Shift |
|----------|-----|--------|
| `slash_bslash` | `/` | `\` |
| `dot_brc` | `.` | `{` |
| `hash_per` | `#` | `%` |
| `comma_par` | `,` | `(` (encloser) |
| `bkt_tilde` | `[` | `~` |
| `dqt_star` | `"` | `*` |
| `sqt_at` | `'` (encloser) | `@` |

### Backspace Chain

Multi-level backspace via mod-morphs:

- **Mac** (`bsp4` → `bsp3`): Tap = `⌥⌫` (word delete), +Ctrl = `⌫` (char), +Alt = Tab
- **Win** (`bsp2` → `bsp1`): Tap = `Ctrl+⌫` (word delete), +Ctrl = `⌫` (char), +Alt = Tab

### Enclosers

Hold `'`, `"`, or `,`(→`(`) to wrap the current selection:
1. Cuts selection (`⌘X`)
2. Types opening + closing character
3. Moves cursor back
4. Pastes (`⌘V`)

### Sticky Keys

| Behavior | Timeout | Use |
|----------|---------|-----|
| `skq` | 1000ms | Quick-release sticky modifier |
| `sk_l` | 500ms | Quick-release sticky layer |
| `&sl` | 500ms | Oneshot layer (used for Cursor layer) |

---

## Macros Reference

| Macro | What it does |
|-------|-------------|
| `spc_sh` | Space → sticky Shift |
| `sp_sh` | Space → hold for Shift (balanced hold-tap) |
| `spc_l` | Space → oneshot Cursor layer |
| `comm_l` | Press ⌘ + activate Command layer (release both on key up) |
| `scroll` | Send hotkey → activate Scroll layer → send exit hotkey on release |
| `scroll_toggle` | Toggle Scroll layer + send hotkey |
| `b_slsh` | F16 then `\` (workaround for grave/backslash issue) |
| `upupup` / `downdown` / `leftleft` / `rightright` | 5× arrow key for fast movement |
| `kp_qu` | Types `Q`, releases shift, types `u` (auto-lowercase) |
| `SQT_close` / `PAR_close` / `DQT_close` | Selection enclosers for `''`, `()`, `""` |
| `a_uml` / `o_uml` / `u_uml` | Type umlaut via macOS Alt+U dead key |
| `a_cap_uml` / `o_cap_uml` / `u_cap_uml` | Capital umlaut variants |
| `pg_r_com` / `pg_l_com` | Ctrl+Tab / Ctrl+Shift+Tab (browser tab switching) |
| `gg` | Types `gg` (vim go-to-top) |
| `EURO` | Alt+0128 (€ sign via numpad entry) |
| `uni_00`–`uni_27` | Parameterized Unicode macros for various code pages |

---

## Configuration (`hillside46.conf`)

| Setting | Status | Notes |
|---------|--------|-------|
| Rotary encoders | Disabled | Uncomment `CONFIG_EC11` lines to enable |
| RGB underglow | Disabled | Drains battery quickly |
| BT signal boost | Disabled | Only enable if connection issues |
| Sleep mode | Disabled | Would sleep after 1 hour |
| Battery level reporting | **Enabled** | Proxied from peripheral to central |

---

## German Character Support

`german-keymap.h` maps German keyboard positions to US key codes. Used by umlauts and special characters. Key mappings:

- Y/Z are swapped (`DE_Y` = `Z`, `DE_Z` = `Y`)
- Umlauts: `DE_AE` = `'`, `DE_OE` = `;`, `DE_UE` = `[`
- Eszett: `DE_SS` = `-`
- Symbols use `RA()` (Right Alt) combos: `@`, `~`, `€`, `|`, `{`, `}`, `[`, `]`

---

## Building

Pushing any non-`.md` change triggers a GitHub Actions build for both halves:
- `nice_nano//zmk` + `hillside46_left`
- `nice_nano//zmk` + `hillside46_right`

Download the firmware artifact from the Actions tab and flash via [ZMK instructions](https://zmk.dev/docs/user-setup#installing-the-firmware).

---

## Files

| File | Purpose |
|------|---------|
| `config/hillside46.keymap` | All layers, macros, behaviors, combos |
| `config/hillside46.conf` | Feature toggles (BT, RGB, sleep, battery) |
| `config/german-keymap.h` | German keyboard code mappings |
| `config/boards/shields/hillside46/` | Hardware definitions (matrix, pins, overlays) |
| `build.yaml` | GitHub Actions build matrix |
