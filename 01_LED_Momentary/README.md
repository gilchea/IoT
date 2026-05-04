# 01 - LED Momentary Control

Bài học này hướng dẫn cách điều khiển LED sáng khi nhấn nút và tắt khi thả nút ra.

## Chức năng
- Khi nhấn nút: LED bật sáng.
- Khi thả nút: LED tắt.

## Sơ đồ kết nối (Tham khảo)
- **LED**: Cực dương (Anode) nối với PIN 8 thông qua điện trở 220 Ohm, cực âm (Cathode) nối GND.
- **Button**: Một chân nối PIN 7, chân còn lại nối VCC (5V). (Lưu ý: Sử dụng chế độ INPUT bình thường trong code).

## Giải thích Code
- `digitalRead(BUTTON)`: Đọc trạng thái của nút nhấn.
- `digitalWrite(LED_PIN, HIGH)`: Cấp điện cho LED sáng.
