# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

## 1. Entropy / Redundancy
- [x] Input: `aaaa` -> entropy thấp, redundancy cao
- [x] Input: `abcd` -> entropy cao hơn `aaaa`
- [x] Input: `hello world` -> entropy và redundancy được tính hợp lệ

## 2. Modulo inverse
- [x] `a=3, m=7` -> nghịch đảo modulo là 5
- [x] `a=10, m=17` -> nghịch đảo modulo là 12
- [x] `a=6, m=9` -> không tồn tại nghịch đảo modulo

## 3. Ghi chú
Entropy đạt giá trị cực đại khi các ký tự xuất hiện với xác suất bằng nhau.
Dữ liệu càng có tính quy luật (như aaaa) thì Entropy càng thấp và Redundancy (độ dư thừa) càng cao. Điều này cho thấy dữ liệu dễ bị nén hoặc dễ bị dự đoán trong mật mã học.
