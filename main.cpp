#include <iostream>
#include <typeinfo>

using namespace std;

int main() {

    // ==================================================
    // 1. 변수와 상수, 표준 스트림 입출력
    // ==================================================

    cout << "===== 1. Variable / Constant =====" << endl;

    // int형 변수를 선언하면서 초기화
    int studentAge = 20;

    cout << "studentAge = " << studentAge << endl;

    // 데이터형의 크기 확인
    cout << "sizeof(studentAge) = "
         << sizeof(studentAge) << " bytes" << endl;

    // 데이터형 이름 확인
    cout << "type of studentAge = "
         << typeid(studentAge).name() << endl;


    // int -> double 형변환
    double ageAsDouble = static_cast<double>(studentAge);

    cout << "ageAsDouble = "
         << ageAsDouble << endl;

    cout << "type of ageAsDouble = "
         << typeid(ageAsDouble).name() << endl;


    // const를 이용하여 상수로 선언
    const int fixedAge = studentAge;

    cout << "fixedAge = "
         << fixedAge << endl;


    // 다시 일반 변수 선언 후 표준 입력
    int inputAge;

    cout << "\nEnter your age: ";
    cin >> inputAge;

    cout << "Your age is "
         << inputAge << endl;


    // ==================================================
    // 2. 전위 증가 / 후위 증가 연산자
    // ==================================================

    cout << "\n===== 2. Prefix / Postfix Increment =====" << endl;

    int number = 5;

    cout << "Original number = "
         << number << endl;

    // 전위 증가
    cout << "++number = "
         << ++number << endl;

    // 다시 5로 초기화
    number = 5;

    // 후위 증가
    cout << "number++ = "
         << number++ << endl;

    cout << "After number++ = "
         << number << endl;


    // ==================================================
    // 3. if 조건문 - == 연산자
    // ==================================================

    cout << "\n===== 3. if with == =====" << endl;

    int score = 100;

    if (score == 100) {
        cout << "score is 100." << endl;
    }


    // ==================================================
    // 4. if 조건에서 = 사용
    // ==================================================

    cout << "\n===== 4. if with = =====" << endl;

    int testNumber = 0;

    // 주의:
    // == 는 비교
    // = 는 대입
    if (testNumber = 5) {
        cout << "The condition is true." << endl;
    }

    cout << "testNumber = "
         << testNumber << endl;


    // ==================================================
    // 5. if / else
    // ==================================================

    cout << "\n===== 5. if / else =====" << endl;

    int temperature = 30;

    if (temperature >= 30) {
        cout << "It is hot." << endl;
    }
    else {
        cout << "It is not hot." << endl;
    }


    // ==================================================
    // 6. if / else if / else
    // ==================================================

    cout << "\n===== 6. if / else if / else =====" << endl;

    int examScore = 85;

    if (examScore >= 90) {
        cout << "Grade A" << endl;
    }
    else if (examScore >= 80) {
        cout << "Grade B" << endl;
    }
    else {
        cout << "Grade C" << endl;
    }


    // ==================================================
    // 7. if / else -> 조건 연산자
    // ==================================================

    cout << "\n===== 7. Conditional Operator =====" << endl;

    int value = 10;

    // 기존 if / else
    if (value > 0) {
        cout << "if/else: Positive" << endl;
    }
    else {
        cout << "if/else: Zero or Negative" << endl;
    }

    // 조건 연산자로 변경
    cout << "Conditional operator: "
         << (value > 0 ? "Positive" : "Zero or Negative")
         << endl;


    // ==================================================
    // 8. switch 구문
    // ==================================================

    cout << "\n===== 8. switch =====" << endl;

    int menu = 2;

    switch (menu) {
        case 1:
            cout << "Coffee" << endl;
            break;

        case 2:
            cout << "Tea" << endl;
            break;

        case 3:
            cout << "Juice" << endl;
            break;

        default:
            cout << "Invalid menu" << endl;
    }


    // ==================================================
    // 9. switch -> if / else if / else
    // ==================================================

    cout << "\n===== 9. switch -> if =====" << endl;

    if (menu == 1) {
        cout << "Coffee" << endl;
    }
    else if (menu == 2) {
        cout << "Tea" << endl;
    }
    else if (menu == 3) {
        cout << "Juice" << endl;
    }
    else {
        cout << "Invalid menu" << endl;
    }


    // ==================================================
    // 10. do while
    // ==================================================

    cout << "\n===== 10. do while =====" << endl;

    int i = 1;

    do {
        cout << i << " ";
        i++;
    }
    while (i <= 5);

    cout << endl;


    // ==================================================
    // 11. while
    // ==================================================

    cout << "\n===== 11. while =====" << endl;

    int j = 1;

    while (j <= 5) {
        cout << j << " ";
        j++;
    }

    cout << endl;


    // ==================================================
    // 12. for
    // ==================================================

    cout << "\n===== 12. for =====" << endl;

    for (int k = 1; k <= 5; k++) {
        cout << k << " ";
    }

    cout << endl;


    return 0;
}