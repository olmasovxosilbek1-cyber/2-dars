login="admin"
parol="1234"
urunishlar =5

while True:
    l = input("login:")
    p = input("parol:")
    if l == login and p == parol:
        break
    print("login yoki parol hato")
    
    urunishlar -= 1
    if urunishlar ==0:
        break
if urunishlar == 0:
    print("urunishlar soni ortib ketdi")
else:
    print("tizimga hush kelibsiz")