# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tìm hiểu cách đo lường thông tin qua Entropy/Redundancy và thực hiện thuật toán Euclid mở rộng để tìm nghịch đảo modulo.

## 2. Cách làm
Sử dụng C++ để tính toán tần suất ký tự và áp dụng công thức Shannon. Triển khai thuật toán Euclid mở rộng để tìm số nguyên x thỏa mãn phương trình đồng dư.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|:---|---:|---:|:---|
| `aaaa` | 0.0000 | 8.0000 | Chuỗi lặp hoàn toàn, độ dư thừa cao nhất. |
| `abcd` | 2.0000 | 6.0000 | Các ký tự xuất hiện 1 lần, entropy tăng. |
| `hello world` | 2.8454 | 5.1546 | Chuỗi tự nhiên có độ hỗn loạn trung bình. |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|:---|:---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | -1 |

## 4. Kết luận
Em đã hiểu được mối liên hệ giữa độ lặp lại của dữ liệu và khả năng nén (Entropy). Đồng thời nắm vững cách tìm nghịch đảo modulo bằng code.
