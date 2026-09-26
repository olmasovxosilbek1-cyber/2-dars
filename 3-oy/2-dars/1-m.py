ball = int(input("balni kiriting:"))

if ball >= 0 and ball <60:
    print("imtihondan yiqildingiz")
elif 60<= ball <=70:
    print("qoniqarli:")
elif 70< ball <= 85:
    print("yahshi")
elif 85< ball <= 94:
    print("alo")
elif 94< ball <= 100:
    print("2ta 5")
else:
    print("bunday ball mavjud emas")