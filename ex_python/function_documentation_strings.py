def add(a, b):
    """이 함수는 a와 b 를 더한 뒤 결과를 반환하는 함수입니다."""
    return a+b

x = add(10, 20)     # 함수를 호출해도 독스트링을 출력되지 않음
print(x)

print(add.__doc__)  # 함수의 __doc__으로 독스트링 출력


