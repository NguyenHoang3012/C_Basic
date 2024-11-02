########################################################################################
Khi nào nên sử dụng static function:

Khi bạn muốn giới hạn phạm vi của một hàm để chỉ sử dụng trong một file nhất định.
Khi bạn muốn tránh xung đột tên hàm giữa các file khác nhau.
Khi hàm không cần thiết phải được gọi từ các file khác.
Khi bạn muốn trình biên dịch có thể tối ưu hóa mã tốt hơn.
Tóm lại, static function được sử dụng để quản lý phạm vi truy cập,
tránh xung đột tên, và hỗ trợ tối ưu hóa mã nguồn,
giúp chương trình có cấu trúc rõ ràng và bảo mật hơn.
########################################################################################
Tóm tắt lại những phạm vi sử dụng có thể có của các biến số:
 Một biến số khai báo trong một function sẽ bị xóa đi khi function kết thúc, nó chỉ được
sử dụng riêng cho function này.
 Một biến số khai báo trong một function với từ khóa static ở phía trước sẽ không bị xóa
khi function kết thúc, nó sẽ lưu lại giá trị và cập nhật dọc theo chương trình.
 Một biến số khai báo bên ngoài các functions là một biến số global, có thể sử dụng cho
tất cả các functions của tất cả các file source có trong project.
 Một biến số global với từ khóa static ở phía trước là biến số global chỉ được sử dụng
riêng cho file chứa nó, không dùng được bởi các function viết ở các file khác.
Tương tự, đây là các phạm vi sử dụng có thể có của các function:
 Một function mặc định có thể sử dụng chung cho tất cả các files trong project, nó có
thể gọi ra từ bất cứ vị trí nào trong các file khác.
 Nếu ta muốn một function dùng riêng cho mỗi file chứa nó, bắt buộc phải thêm vào từ
khóa static ở phía trước
########################################################################################