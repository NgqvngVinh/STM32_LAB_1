# STM32 Lab 1 — Vi xử lý & Vi điều khiển (HCMUT)

> Bài thực hành Lab 1 môn Vi xử lý — Vi điều khiển, HK241 (Năm 3), HCMUT. Lập trình STM32F100C6Tx với HAL driver, mô phỏng trên Proteus: GPIO, LED blink, 7-segment display.

## Project scope

| Module | Mô tả |
|---|---|
| [`ex3_4_5/`](ex3_4_5/) | Bài chính: hiển thị 7-đoạn (single + multiplex) trên STM32F100C6Tx, mô phỏng Proteus |
| [`experiments/led_blinky/`](experiments/led_blinky/) | Sandbox: LED nhấp nháy trên STM32F100C6Tx |
| [`experiments/test_mach/`](experiments/test_mach/) | Sandbox: test mạch trên STM32F103RBTx |
| [`docs/`](docs/) | Tài liệu đề bài (`Lab1_Manual.pdf`) |

## Hardware & Dependencies

| Component | Phiên bản / Spec |
|---|---|
| MCU chính | STM32F100C6Tx (ARM Cortex-M3, 24 MHz) |
| MCU sandbox `test_mach` | STM32F103RBTx |
| IDE | STM32CubeIDE 1.13+ |
| Simulator | Proteus 8.x (Professional) |
| Toolchain | arm-none-eabi-gcc (bundled trong CubeIDE) |
| HAL Library | STM32F1xx HAL Driver (đã include trong `Drivers/`) |

## Build & Flash

### Mở project trong STM32CubeIDE
1. `File → Open Projects from File System...`
2. Chọn thư mục `ex3_4_5/stm32/` (hoặc `experiments/<tên>/`)
3. Build: `Project → Build All` (Ctrl+B) — output sinh trong `Debug/` (đã ignore)
4. Flash: kết nối ST-Link → `Run → Run As → STM32 C/C++ Application`

### Mô phỏng trên Proteus
1. Mở `ex3_4_5/proteus/Lab1_ex3+4+5.pdsprj`
2. Right-click MCU → `Edit Properties` → `Program File` trỏ tới `ex3_4_5/stm32/Debug/Lab1_ex3+4+5.hex`
3. Run simulation (▶)

## Team

| Họ tên | MSSV | Vai trò |
|---|---|---|
| _TBD_ | _TBD_ | _TBD_ |
| _TBD_ | _TBD_ | _TBD_ |

## Reports

Báo cáo và đề bài: [`docs/Lab1_Manual.pdf`](docs/Lab1_Manual.pdf)

## License

Educational use — HCMUT VXL/VDK coursework. STM32 HAL driver: see `Drivers/.../LICENSE.txt`.
