# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Mục tiêu của bài lab là làm quen với các khái niệm cơ bản trong lý thuyết thông tin và số học modulo. Cụ thể, sinh viên cần hiểu và triển khai công thức tính toán Shannon Entropy, Redundancy (độ dư thừa dữ liệu) và thuật toán Euclid mở rộng để tìm nghịch đảo modulo.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0.0000| 8.0000|Chuỗi lặp hoàn toàn, không chứa thông tin mới, độ dư thừa tối đa. |
| abcd | 2.0000| 6.0000| Các ký tự xuất hiện đồng đều, entropy tăng lên, độ dư thừa giảm.|
| hello world | 2.8454 | 5.1546|Chuỗi có độ phức tạp trung bình, phản ánh đặc điểm ngôn ngữ tự nhiên.|

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 |5 |
| 10 | 17 | 12 | 12|
| 6 | 9 | Không tồn tại |Không tồn tại (-1) |

## 4. Kết luận
Qua bài lab này, em đã nắm vững cách thức đo lường lượng thông tin trong dữ liệu và hiểu rõ mối liên hệ giữa Entropy và khả năng nén dữ liệu (Redundancy càng cao thì dữ liệu càng dễ nén). Khó khăn lớn nhất là việc xử lý số dư âm trong hàm mod_inverse khi kết quả từ thuật toán Euclid mở rộng trả về $x < 0$. Việc thực hiện các ví dụ tính toán tay song song với lập trình đã giúp em hiểu rõ bản chất của thuật toán Euclid mở rộng và ứng dụng của nó trong bảo mật thông tin.
