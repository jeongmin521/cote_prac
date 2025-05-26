#include <iostream>
#include <csignal>   // signal 관련 함수 정의
#include <unistd.h>  // sleep 함수

using namespace std;

// 시그널 핸들러 함수 정의
void handleSignal(int signal) {
    cout << "\n Signal caught: " << signal << endl;
    cout << "Gracefully exiting program..." << endl;
    exit(signal);  // 시그널 번호와 함께 종료
}

int main() {
    // SIGINT (Ctrl+C) 시 handleSignal 함수 실행하도록 등록
    signal(SIGINT, handleSignal);

    // 무한 루프: 사용자에게 프로그램이 실행 중임을 보여줌
    while (true) {
        cout << "Program is running... (press Ctrl+C to stop)" << endl;
        sleep(1);  // 1초 대기
    }

    return 0;
}


/*
signal 
프로세스에 특정 이벤트(= 시그널)가 발생했을 때
그 이벤트를 처리할 함수를 등록하는 기능

SIGINT | Ctrl+C로 인터럽트    
SIGTERM | 종료 요청(kill 명)        
SIGSEGV | 세그멘테이션 오류       
SIGABRT | 비정상 종료          
SIGKILL | 강제 종료 (잡을 수 없음, kill -9) 
SIGTSTP	| Stop 시그널 (터미널 중지)(ctrl + z)


signal(SIGINT, handleSignal);
SIGINT는 키보드 인터럽트(Ctrl+C)를 의미

사용자가 Ctrl+C를 누르면, handleSignal() 함수가 호출

handleSignal(int signal)
시그널 번호를 인자로 받음 (SIGINT는 일반적으로 2)
여기선 종료 메시지를 출력하고, exit(signal)로 종료

sleep(1)
1초간 대기. 프로그램이 너무 빨리 실행되어 콘솔을 도배하지 않도록 함.
*/
