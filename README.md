# Embedded-system-2024
부경대학교 2024 IoT 개발자 과정 - 임베디드 시스템

## day01
- 라즈베리파이 설치

## day02
- sudo apt update
- sudo apt upgrade -y
- clear : 지우기
- 환경설정 편집기: 코드 작업 할때 사용하는 프로그램(nano)
- 기본명령어(C) - 기존 pc같이 사용하면 안된다. 순서에 맞추어서 사용
    - ls : 현재 목록, ls -a : 숨겨져 있는 파일 확인, ls -l: 상세하게 보여줌, ls .etc: 환경 파일 등을 보여주는 디렉토리
    - pwd : 기본위치
    - mkdir(make directory) Work: 새로운 work 디렉터리 생성
    - rm(remove) -fr Work: 디렉터리 삭제
    - cd work: work(파일명)에 들어감, cd ..: 상위 폴더로 빠져나감
    - ls /etc : 환경 (하얀색 - 파일 / 파란색 – 폴더)
    - nano /etc/nanorc -> 수정불가하므로 아래로 수정
    - sudo nano /etc/nanorc: 관리자 권한
        - set autoindent //주석 제거
        - set linenumbers //주석 제거
        - set tabsize 2 // 주석제거 및 사이즈 크기 바꿈

## day03
- VNC VIEWER 설치 (원격제어 프로그램)
- 리눅스에 vncserver-virtual 입력 후 주소확인 
-----------------------------------------------
- nano 파일명 : 파일 열기(콘솔창) or 신규이름일시 새 창

- 리눅스 상단 *는 수정중이라는 의미 

- cd work/C  work 안에 있는 C 폴더 접근 

- gcc -o 컴파일명 기존이름  :  컴파일하는 작업 
- gcc 기존이름 : 컴파일 자동생성 -> a.out으로 생성 (1개만 생성되므로, 뒤에 생성시 새로운것을 덮어짐)

- ./컴파일명 : 출력파일의 내용 출력 

- mv 기존이름 바꿀이름:  이름 수정이나 이동시 사용
-------------------------------------------------

## day04
list02.c 
- 연결리스트의 경우 인덱스 사용 불가
    - 예) node[3] 접근 불가
    - 따라서 검색 같은 경우는 불편하지만, 삭제 및 생성 등은 용이하다. 

   
list03.c
- 전위삽입
- 후위삽입

## day05
- 함수로 구현하기 

## day06
- stack 과 queue 연결리스트

## day07
- queue 순차리스트

- C/makeT 폴더에 생성함
- main.c inputf.c printf.c 생성
- gcc printf.c input.c main.c 컴파일
- makefile 생성 후 아래 입력
  
test: main.o inputf.o printf.o
  gcc -o test main.o inputf.o printf.o

main.o: main.c
  gcc -c main.c

inputf.o: inputf.c
  gcc -c inputf.c

printf.o: printf.c
  gcc -c printf.c
- make 입력
    - test 파일, .o로 확장자 파일 생성 
??????????????????
