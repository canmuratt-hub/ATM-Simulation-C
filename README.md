# 🏦 C Console ATM Simulation (Banka Otomasyonu)

## 📝 Proje Hakkında
Bu proje, C programlama dili kullanılarak geliştirilmiş, gerçeğe uygun bir ATM (Bankamatik) simülasyonudur. Sadece temel matematik işlemleri değil, aynı zamanda kullanıcı güvenliği ve mantıksal hata kontrolleri (business logic) ön planda tutularak tasarlanmıştır.

## ⚙️ Öne Çıkan Özellikler
* **Güvenlik Duvarı:** Sisteme giriş için 4 haneli PIN kodu doğrulaması. Yanlış girişlerde deneme hakkı sayacı ve kart bloke etme mantığı.
* **Bakiye Yönetimi:** Para yatırma, para çekme ve güncel bakiye sorgulama işlemleri.
* **Gelişmiş Hata Kontrolleri (Bug-Fixes):** * Kullanıcının bakiyesinden fazla para çekmesini engelleyen limit kontrolü.
  * Sistemi manipüle etmeye yönelik "negatif tutar (-500 TL)" girme açıklarının kapatılması.
* **Döngüsel Menü:** Kullanıcı çıkış yapana kadar sistemin aktif kalmasını sağlayan `do-while` mimarisi.

## 💻 Kullanılan Teknolojiler
* C Programlama Dili
* Geliştirme Ortamı: Dev-C++ / GCC Compiler

## 🚀 Nasıl Çalıştırılır?
Projeyi bilgisayarınıza indirdikten sonra `.c` uzantılı dosyayı herhangi bir C derleyicisinde (IDE) açıp `Compile & Run` (Derle ve Çalıştır) yaparak test edebilirsiniz.
