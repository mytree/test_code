with open('hello.txt', 'r') as file:    # hello.txt 파일을 읽기모드로 열기
    for line in file:                   # for 에 파일 객체 지정하면
                                        # 파일의 내용을 한 줄씩 읽어서 변수 저장
        print(line.strip('\n'))         # 파일에서 읽어온 문자열에서 \n 삭제
