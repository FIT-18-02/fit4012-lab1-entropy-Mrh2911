# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tìm hiểu về lý thuyết thông tin thông qua việc tính toán Entropy, Redundancy và áp dụng toán học rời rạc để tìm nghịch đảo modulo bằng thuật toán Euclid mở rộng.

## 2. Cách làm
Triển khai mã nguồn C++ để thống kê tần suất ký tự và tính toán độ hỗn loạn thông tin. Sử dụng thuật toán Euclid mở rộng để giải phương trình Diophantine tìm nghịch đảo modulo.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0.0000 | 8.0000 | Entropy tối thiểu |
| abcd | 2.0000 | 6.0000 | Ký tự không lặp |
| hello world | 2.8454 | 5.1546 | Chuỗi tự nhiên |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | -1 |

## 4. Kết luận
Em đã hoàn thành bài lab và hiểu rõ cách dữ liệu được đo lường lượng thông tin cũng như cách tìm nghịch đảo modulo phục vụ cho mật mã học.
