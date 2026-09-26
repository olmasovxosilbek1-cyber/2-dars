son = int(input("sonni kiriting:"))
raqamlar_yigindisi = 0

while son>0:
    raqamlar_yigindisi += son %10
    son = son // 10

print(raqamlar_yigindisi)