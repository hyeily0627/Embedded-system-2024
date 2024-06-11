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
    - rm(remove) -fr Work: 디렉터리명 삭제
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

- cd work/C : work 안에 있는 C 폴더 접근 

- gcc 기존이름 -o 컴파일명  :  컴파일하는 작업 
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

```
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
```

## day08
- 선형 탐색

- 이진 탐색
  - middle 값을 기준으로 앞뒤로 탐색
  - 오름차순 or 내림차순 정렬 필수

- 버블 정렬 

## day09
- 리눅스환경 파일 입출력함수

## 이후 프로젝트 진행
- 상품관리 시스템

* File: ProductClass.cpp
- Created: 24-03-11
- Folder : Product Manager
- Language : C++
- Requirements
  - C++를 사용하여 제품 관리 프로그램을 만든다.
  - class Product에 상품 ID, 가격, 제작사 멤버함수를 선언한다.
  - class Product를 상속받아 book, handPhone, computer 클래스를 선언한다.
  - 상품 추가, 상품출력, 상품 검색, 종료 메뉴를 만들어 함수를 작성한다. 

- 아이디 패스워드 로그인 처리
* File: fileLogin.c, myinfo.txt
- Created: 24-03-21
- Folder : File입출력
- Language : C
- Requirements
  - C를 사용하여 파일에 로그인하여 정보를 열람한다.
  - myinfo.txt에 개인정보가 저장되어있다.
  - 리눅스 파일 시스템을 사용하여 myinfo.txt 파일에 접근한다.
  - 접근 시 아이디와 비번을 입력받아 허용된 사용자만 파일 열람을 허용한다.

- 도서관리 시스템(연결리스트)
* File:
  - main.c
  - Book.c
  - Book.h
  - makefile
- Created: 24-03-27
- Folder : LinkedList
- Language : C
- Requirements
  - C를 사용하여 도서 관리 프로그램을 만든다.
  - Linked List를 사용하여 데이터를 관리한다.
  - 도서등록, 도서검색, 도서삭제, 도서출력, 종료 메뉴로 만들어 함수를 작성한다.
  - 로그인 시 도서 관리 시스템에 허용된 사용자만 접근 가능하다.
