#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import uuid
import hashlib

def hash_password(password):
    # uuid is used to generate a random number
    salt = uuid.uuid4().hex
    print( "salt=", salt )
    return hashlib.sha256(salt.encode() + password.encode()).hexdigest() + ':' + salt

def check_password(hashed_password, user_password):
    password, salt = hashed_password.split(':')
    return password == hashlib.sha256(salt.encode() + user_password.encode()).hexdigest()

new_pass = input('Please enter a password: ')
hashed_password = hash_password(new_pass)

print('DB에 password가 저장된 문자: ' + hashed_password)
old_pass = input(' 앞서 기록한 비번을 넣으시오: ')

if check_password(hashed_password, old_pass):
    print('올바른 비밀번호가 입력')
else:
    print('틀린 비밀번호가 입력.')

