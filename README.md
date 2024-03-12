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