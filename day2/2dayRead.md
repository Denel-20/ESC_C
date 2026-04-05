# ESC_C
## 2day

### c언어
- int  
    정수형, 대부분 4바이트
- char  
    문자형, 1바이트
- float  
    실수형, 4바이트
- short  
    정수형, 2바이트
- double  
    실수형, 8바이트
- signed - 부호 있음 / unsigned - 부호 없음
- size_t  
    양의 정수형
- malloc  
    메모리 할당 함수

---

- ASCII  
    알파벳 전용, 문자 크기 고정
- 유니코드  
    전세계 문자용, 크기 고정 x
- UTF-8  
    유니코드 일종
- EUC-KR  
    유니코드x, 크기 고정

---
### 과제

#### 파이선    
    text = "안녕하세요"  
    utf = text.encode('utf-8')  
    print(utf) - b'\xec\x95\x88\xeb\x85\x95\xed\x95\x98\xec\x84\xb8\xec\x9a\x94'  
    text2 = utf.decode('utf-8')
    print(text2) - 안녕하세요
#### 문자 코드  
- ASCII  
    문자 크기 - 1바이트  
    숫자(10)  
    알파벳(26(소) + 26(대))  
    특수 문자(32)  
    가타(33)  

- UTF-8  
    문자 크기 - 1~4바이트(최대 8바이트)  
    ASCII와의 호환됨(1바이트까지 동일)

-   ##### 출력    
        int main(void) {  
            char msg[] = "안녕하세요";  
            printf("%s\n", msg);  
            return 0;  
        }
