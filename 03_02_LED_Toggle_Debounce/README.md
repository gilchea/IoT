# 03_02 - LED Toggle with Debounce

Phiên bản nâng cấp của bài Toggle LED, bổ sung tính năng "Debounce" (chống rung) bằng phần mềm để đảm bảo nút nhấn hoạt động ổn định nhất.

## Tại sao cần Debounce?
Các nút nhấn cơ học thường tạo ra các tín hiệu nhiễu (rung) cực nhanh khi tiếp xúc. Nếu không có lọc nhiễu, vi điều khiển có thể hiểu lầm một lần nhấn thành nhiều lần.

## Chức năng
- Sử dụng hàm `millis()` để tạo khoảng thời gian trễ (50ms) giữa các lần đọc trạng thái nút nhấn.
- Giúp hệ thống không bị nhiễu bởi các xung tín hiệu không mong muốn.

## Kết nối
- LED: PIN 8.
- Button: PIN 7 (Sử dụng `INPUT_PULLUP`).
