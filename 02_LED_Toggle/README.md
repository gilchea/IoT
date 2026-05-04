# 02 - LED Toggle

Bài học này hướng dẫn cách thay đổi trạng thái của LED mỗi khi nhấn nút.

## Chức năng
- Nhấn nút lần 1: LED bật.
- Nhấn nút lần 2: LED tắt.

## Nguyên lý
Code sử dụng một biến `lastButtonState` để theo dõi sự thay đổi trạng thái của nút nhấn (từ thả sang nhấn) để tránh việc LED bị đảo trạng thái liên tục khi giữ nút.

## Kết nối
- LED: PIN 8.
- Button: PIN 7.
