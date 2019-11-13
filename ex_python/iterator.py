class Counter:
        def __init__(self, stop):
            self.current = 0    # 현재 숫자 유지, 0부터 지정된 숫자 직전까지 반복
            self.stop = stop    # 반복을 끝낼 숫자

        def __iter__(self):
            return self         # 현재 인스턴스를 말함
        
        def __next__(self):
            if self.current < self.stop:    # 현재 숫자가 반복을 끝낼 숫자보다 작을 때
                r = self.current            # 반환할 숫자를 변수에 저장
                self.current += 1           # 현재 숫자를 1 증가 시킴
                return r                    # 숫자를 반환
            else:
                raise StopIteration         # 예외 발생
        

for i in Counter(3):
    print(i, end=' ')

