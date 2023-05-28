// Berilgan N sonigacha bo‘lgan sonlarning faktarialini hisoblang
#include <iostream>

int main() {
    int N;
    std::cout << "N ni kiriting: ";
    std::cin >> N;

    int faktorial = 1;
    for (int i = 1; i <= N; i++) {
        faktorial *= i;
    }

    std::cout << N << " ning faktoriali: " << faktorial << std::endl;

    return 0;
}


//Tug‘ilgan kunigizga necha kun bo‘lganini aniqlovchi funksiya yozing (C++)
#include <iostream>
#include <chrono>

int countDaysSinceBirth(const std::chrono::system_clock::time_point& birthDate) {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    // Convert time points to durations
    std::chrono::duration<double> elapsed_seconds = now - birthDate;

    // Convert duration to days
    int daysSinceBirth = static_cast<int>(elapsed_seconds.count() / (60 * 60 * 24));

    return daysSinceBirth;
}

int main() {
    // Tug'ilgan kuningizni belgilang
    std::chrono::system_clock::time_point birthDate = std::chrono::system_clock::time_point(std::chrono::seconds(/*Tug'ilgan kuningizdagi UNIX vaqti*/));

    int daysSinceBirth = countDaysSinceBirth(birthDate);

    std::cout << "Tug'ilgan kuningizdan hozirgacha " << daysSinceBirth << " kun o'tgan." << std::endl;

    return 0;
}

//Tug‘ilgan yilingizga qarab muchalingizni aniqlovchi funksiya yozing (C++)
#include <iostream>
#include <chrono>

int calculateAge(int birthYear) {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    struct std::tm* ptm = std::localtime(&now_c);
    int currentYear = ptm->tm_year + 1900;

    int age = currentYear - birthYear;

    return age;
}

int main() {
    // Tug'ilgan yilingizni belgilang
    int birthYear;
    std::cout << "Tug'ilgan yilingizni kiriting: ";
    std::cin >> birthYear;

    int age = calculateAge(birthYear);

    std::cout << "Siz hozir " << age << " yoshdasiz." << std::endl;

    return 0;
}

// Berilgan so‘zda nechta unli va undosh harf borligini aniqlovchi funksiya yozing (C++)
#include <iostream>
#include <string>
#include <cctype>

int countVowelsAndConsonants(const std::string& word, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    for (char c : word) {
        // Harfni katta harf qilish
        c = std::toupper(c);

        if (c >= 'A' && c <= 'Z') {
            // Unli harflar: A, E, I, O, U
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    return vowelCount + consonantCount;
}

int main() {
    std::string word;
    std::cout << "So'zni kiriting: ";
    std::cin >> word;

    int vowelCount, consonantCount;
    int totalCount = countVowelsAndConsonants(word, vowelCount, consonantCount);

    std::cout << "Unli harflar soni: " << vowelCount << std::endl;
    std::cout << "Undosh harflar soni: " << consonantCount << std::endl;
    std::cout << "Jami harflar soni: " << totalCount << std::endl;

    return 0;
}

// 4x5 matrisaning minimum elementini topuvchi funksiya yozing (C++)
#include <iostream>

int findMinimum(const int matrix[][5], int rows, int cols) {
    int minimum = matrix[0][0]; // Matrisning birinchi elementini minimum sifatida tanlash

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < minimum) {
                minimum = matrix[i][j];
            }
        }
    }

    return minimum;
}

int main() {
    int matrix[4][5] = {
        {5, 9, 2, 4, 7},
        {1, 6, 3, 8, 2},
        {9, 4, 7, 5, 1},
        {3, 2, 6, 9, 8}
    };

    int minimum = findMinimum(matrix, 4, 5);
    std::cout << "Minimum element: " << minimum << std::endl;

    return 0;
}

// Jumladagi belgilarni teskari taribda yuzvchi funksiya yozing (C++)
#include <iostream>
#include <string>
#include <algorithm>

std::string reverseSentence(const std::string& sentence) {
    std::string reversed = sentence;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    std::string sentence;
    std::cout << "Jumlayi kiriting: ";
    std::getline(std::cin, sentence);

    std::string reversedSentence = reverseSentence(sentence);
    std::cout << "Teskari jumla: " << reversedSentence << std::endl;

    return 0;
}
//Berilgan sekund qiymatni necha soat va minutga teng bo‘lishini hisoblovchi funksiya yozing (C++)
#include <iostream>

void convertSeconds(int seconds, int& hours, int& minutes) {
    hours = seconds / 3600;      // Sekundlarni soatlarga aylantirish
    seconds %= 3600;             // Qoldiq sekundlarni saqlash
    minutes = seconds / 60;      // Qoldiq sekundlarni minutlarga aylantirish
    seconds %= 60;               // Qoldiq sekundlarni saqlash
}

int main() {
    int seconds;
    std::cout << "Sekundlarni kiriting: ";
    std::cin >> seconds;

    int hours, minutes;
    convertSeconds(seconds, hours, minutes);

    std::cout << "Natija: " << hours << " soat, " << minutes << " minut." << std::endl;

    return 0;
}
// Berilgan sana qaysi faslga to‘g‘ri kelishini aniqlovchi dastur tuzing (C++)

#include <iostream>
#include <string>

std::string determineSeason(int month, int day) {
    std::string season;

    if ((month == 12 && day >= 21) || (month >= 1 && month <= 2) || (month == 3 && day <= 20)) {
        season = "Qish";
    } else if ((month == 3 && day >= 21) || (month >= 4 && month <= 5) || (month == 6 && day <= 20)) {
        season = "Bahor";
    } else if ((month == 6 && day >= 21) || (month >= 7 && month <= 8) || (month == 9 && day <= 22)) {
        season = "Yoz";
    } else {
        season = "Kuz";
    }

    return season;
}

int main() {
    int month, day;
    std::cout << "Sana (oy kuni): ";
    std::cin >> month >> day;

    std::string season = determineSeason(month, day);
    std::cout << "Berilgan sana " << season << " faslga to'g'ri keladi." << std::endl;

    return 0;
}
// Yoshni yillarda aniqlovchi 10dan 99gacha butun sonlar berilgan. Son kiritilganda unga mos so‘zlarda ifodalovchi dastur tuzing (С++)
#include <iostream>
#include <string>

std::string getNumberWord(int number) {
    std::string numberWord;

    if (number >= 10 && number <= 19) {
        switch (number) {
            case 10: numberWord = "O'n"; break;
            case 11: numberWord = "O'n bir"; break;
            case 12: numberWord = "O'n ikki"; break;
            case 13: numberWord = "O'n uch"; break;
            case 14: numberWord = "O'n to'rt"; break;
            case 15: numberWord = "O'n besh"; break;
            case 16: numberWord = "O'n olti"; break;
            case 17: numberWord = "O'n yetti"; break;
            case 18: numberWord = "O'n sakkiz"; break;
            case 19: numberWord = "O'n to'qqiz"; break;
        }
    } else {
        int tens = number / 10;
        int ones = number % 10;

        switch (tens) {
            case 2: numberWord = "Yigirma"; break;
            case 3: numberWord = "O'ttiz"; break;
            case 4: numberWord = "Qirq"; break;
            case 5: numberWord = "Ellik"; break;
            case 6: numberWord = "Oltmish"; break;
            case 7: numberWord = "Yetmish"; break;
            case 8: numberWord = "Sakson"; break;
            case 9: numberWord = "To'qson"; break;
        }

        if (ones > 0) {
            numberWord += " ";
            switch (ones) {
                case 1: numberWord += "bir"; break;
                case 2: numberWord += "ikki"; break;
                case 3: numberWord += "uch"; break;
                case 4: numberWord += "to'rt"; break;
                case 5: numberWord += "besh"; break;
                case 6: numberWord += "olti"; break;
                case 7: numberWord += "yetti"; break;
                case 8: numberWord += "sakkiz"; break;
                case 9: numberWord += "to'qqiz"; break;
            }
        }
    }

    return numberWord;
}

int main() {
    int number;
    std::cout << "Butun son kiriting (10 dan 99 gacha): ";
    std::cin >> number;

    std::string numberWord = getNumberWord(number);
    std::cout << "Son ifodalovchi so'z: " << numberWord << std::endl;

    return 0;
}
// Talabalar o‘zlashtirish ko‘rsatkichini reyting tizimidan baho tizimiga o‘tkazuvchi dastur tuzing. (С++)
#include <iostream>
#include <vector>

// O'zlashtirish ko'rsatkichini baho tizimiga o'tkazuvchi funksiya
std::vector<int> convertGrades(const std::vector<int>& scores) {
    std::vector<int> grades;

    for (int score : scores) {
        if (score >= 90) {
            grades.push_back(4); // A
        } else if (score >= 80) {
            grades.push_back(3); // B
        } else if (score >= 70) {
            grades.push_back(2); // C
        } else if (score >= 60) {
            grades.push_back(1); // D
        } else {
            grades.push_back(0); // F
        }
    }

    return grades;
}

int main() {
    std::vector<int> scores = {85, 92, 78, 60, 95};

    std::cout << "Reyting tizimi: ";
    for (int score : scores) {
        std::cout << score << " ";
    }
    std::cout << std::endl;

    std::vector<int> grades = convertGrades(scores);

    std::cout << "Baho tizimi: ";
    for (int grade : grades) {
        std::cout << grade << " ";
    }
    std::cout << std::endl;

    return 0;
}
// Berilgan uchta sondan uchburchak yasalishini rostlikga tekshiruvchi dastur tuzing (С++)
#include <iostream>

bool isTriangle(int side1, int side2, int side3) {
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        return true; // Uchburchak yasaladi
    } else {
        return false; // Uchburchak yasalmaydi
    }
}

int main() {
    int side1, side2, side3;
    std::cout << "Uchta tomon uzunliklarini kiriting: ";
    std::cin >> side1 >> side2 >> side3;

    if (isTriangle(side1, side2, side3)) {
        std::cout << "Uchburchak yasaladi." << std::endl;
    } else {
        std::cout << "Uchburchak yasalmaydi." << std::endl;
    }

    return 0;
}
// Kiritilgan parolning to‘g‘ri yoki noto‘g‘ri ekanligini tekshiruvchi dastur tuzing (С++)
#include <iostream>
#include <string>

bool checkPassword(const std::string& password) {
    // Parolni tekshirish uchun kerakli shartlarni belgilang
    // Misol uchun, eng kamida 8 ta belgidan iborat bo'lishi va katta xarf va raqamni o'z ichiga olishi mumkin

    if (password.length() < 8) {
        return false; // Parol eng kamida 8 ta belgidan iborat emas
    }

    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;

    for (char ch : password) {
        if (std::isupper(ch)) {
            hasUpperCase = true;
        } else if (std::islower(ch)) {
            hasLowerCase = true;
        } else if (std::isdigit(ch)) {
            hasDigit = true;
        }
    }

    if (hasUpperCase && hasLowerCase && hasDigit) {
        return true; // Parol to'g'ri
    } else {
        return false; // Parol noto'g'ri
    }
}

int main() {
    std::string password;
    std::cout << "Parolni kiriting: ";
    std::cin >> password;

    if (checkPassword(password)) {
        std::cout << "Parol to'g'ri." << std::endl;
    } else {
        std::cout << "Parol noto'g'ri." << std::endl;
    }

    return 0;
}

// 5 xonali sonni raqamlar yig‘indisini hisoblovchi dastur tuzing (c++)
#include <iostream>

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10; // So'ngra raqamni sum ga qo'shamiz
        number /= 10; // Sonni bir xonali kamaytiramiz
    }
    return sum;
}

int main() {
    int number;
    std::cout << "5 xonali sonni kiriting: ";
    std::cin >> number;

    int sum = sumOfDigits(number);

    std::cout << "Raqamlar yig'indisi: " << sum << std::endl;

    return 0;
}

// Tug‘ilgan kunigizga necha kun bo‘lganini aniqlovchi funksiya yozing (C++)
#include <iostream>
#include <chrono>

int countDaysSinceBirth(const std::string& birthDate) {
    std::chrono::system_clock::time_point today = std::chrono::system_clock::now(); // Joriy sana
    std::time_t todayTime = std::chrono::system_clock::to_time_t(today);

    std::tm* tmToday = std::localtime(&todayTime); // Joriy sana ko'rsatkichini olish
    std::tm tmBirth = {}; // Tug'ilgan kun ko'rsatkichi
    std::istringstream iss(birthDate);
    iss >> std::get_time(&tmBirth, "%Y-%m-%d"); // Tug'ilgan kunni ko'rsatkichiga o'tkazish

    std::chrono::system_clock::time_point birthTime = std::chrono::system_clock::from_time_t(std::mktime(&tmBirth)); // Tug'ilgan kun vaqtini olish
    std::chrono::duration<int> duration = std::chrono::duration_cast<std::chrono::duration<int>>(today - birthTime); // Joriy va tug'ilgan kun orasidagi farq

    return duration.count() / (60 * 60 * 24); // Kunlar sonini qaytarish
}

int main() {
    std::string birthDate = "1990-05-15"; // Tug'ilgan kun

    int daysSinceBirth = countDaysSinceBirth(birthDate);

    std::cout << "Sizning tug'ilgan kuningizdan boshlab " << daysSinceBirth << " kun o'tdi." << std::endl;

    return 0;
}
