# STM32 Lab 1 — Microprocessors & Microcontrollers (HCMUT)

> Lab 1 coursework for Microprocessors & Microcontrollers, Semester 241 (3rd year), HCMUT. STM32F100C6Tx programming with the HAL driver and Proteus simulation: GPIO, LED blink, 7-segment display.

## Project scope

| Module | Description |
|---|---|
| [`ex1/`](ex1/) | Exercise 1: 2-LED alternating blink (Red + Yellow) — basic GPIO output with HAL_Delay |
| [`ex2/`](ex2/) | Exercise 2: 3-LED traffic light sequence (Red, Yellow, Green) with timed transitions |
| [`ex3_4_5/`](ex3_4_5/) | Exercises 3-4-5: 7-segment display (single + multiplex) on STM32F100C6Tx |
| [`ex5-10/`](ex5-10/) | Exercise 5 (state-machine variant): traffic light with countdown logic |
| [`ex6/`](ex6/) | Exercise 6+: 7-segment clock display (hour:minute:second) with multiplexed scan |
| [`experiments/led_blinky/`](experiments/led_blinky/) | Sandbox: minimal LED blink on STM32F100C6Tx |
| [`experiments/test_mach/`](experiments/test_mach/) | Sandbox: board bring-up test on STM32F103RBTx |
| [`docs/`](docs/) | Lab manual (`Lab1_Manual.pdf`) |

## Hardware & Dependencies

| Component | Version / Spec |
|---|---|
| Main MCU | STM32F100C6Tx (ARM Cortex-M3, 24 MHz) |
| `test_mach` sandbox MCU | STM32F103RBTx |
| IDE | STM32CubeIDE 1.13+ |
| Simulator | Proteus 8.x (Professional) |
| Toolchain | arm-none-eabi-gcc (bundled with CubeIDE) |
| HAL Library | STM32F1xx HAL Driver (included under `Drivers/`) |

## Build & Flash

### Open the project in STM32CubeIDE
1. `File → Open Projects from File System...`
2. Select the exercise folder containing `.cproject` (e.g. `ex1/`, `ex2/stm32/`, `ex3_4_5/stm32/`, `ex5-10/`, `ex6/stm32/`, or `experiments/<name>/`)
3. Build: `Project → Build All` (Ctrl+B) — output goes to `Debug/` (gitignored)
4. Flash: connect ST-Link → `Run → Run As → STM32 C/C++ Application`

### Run Proteus simulation
1. Open `ex3_4_5/proteus/Lab1_ex3+4+5.pdsprj`
2. Right-click the MCU → `Edit Properties` → set `Program File` to `ex3_4_5/stm32/Debug/Lab1_ex3+4+5.hex`
3. Run the simulation (▶)


## Reports

Lab manual and writeup: [`docs/Lab1_Manual.pdf`](docs/Lab1_Manual.pdf)
