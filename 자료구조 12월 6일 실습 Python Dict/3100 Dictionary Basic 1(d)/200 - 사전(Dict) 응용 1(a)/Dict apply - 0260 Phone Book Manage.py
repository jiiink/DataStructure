
def print_menu():
    print('1. 전화 번호 출력')
    print('2. 전화 번호 추가')
    print('3. 전화 번호 삭제')
    print('4. 전화 번호 찾기')
    print('5. 종료')
    print()

def print_dic(numbers):
    print("전화 번호:")
    for name in numbers:
        print("이름: ",name," \t번호: ",numbers[name])
    print()

def add_member(numbers):
    print("이름과 번호 추가")
    name = input("이름:")
    phone = input("번호:")
    numbers[name] = phone

def remove_member(numbers):
    print("이름과 번호 삭제")
    name = input("이름:")
    if name in numbers:
        del numbers[name]
    else:
        print(name," 은 없습니다.")

def lookup_member(numbers):
    print("번호 찾기")
    name = input("이름:")
    if name in numbers:
        print("번호 : ",numbers[name])
    else:
        print(name,"를 찾을 수 없습니다.")

# -------------- 여기서 부터 실행된다.

numbers = {}
menu_choice = 0
menus = {1: print_dic, 2:add_member, 3: remove_member, 4:lookup_member}
print_menu()

while menu_choice != 5:
    menu_choice = eval(input("번호를 입력하세요 (1-5):"))
    if menu_choice != 5:
        menus[menu_choice](numbers)
        print_menu()