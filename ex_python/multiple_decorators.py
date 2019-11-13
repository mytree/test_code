def decorator1(func):
    def wrapper():
        print('decorator1 begin')
        func()
        print('decorator1 end')
    return wrapper

def decorator2(func):
    def wrapper():
        print('decorator2 begin')
        func()
        print('decorator2 end')
    return wrapper

# 데코레이터를 여러 개 지정
@decorator1
@decorator2
def hello():
    print('hello')

hello()


