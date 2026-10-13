with open("OY3/9-dars/amaliyot/AMALIYOT.txt",'a') as file:

    ID=int(input("ID: "))
    ism=input("ism: ")
    familiya=input("familiya: ")

    file.write(f"{ID} {ism} {familiya}\n")
    
print("malumot yozildi")