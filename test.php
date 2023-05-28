<?php
// Tug‘ilgan kunigizga necha kun bo‘lganini aniqlovchi funksiya yozing (PHP)

function countDaysSinceBirth($birthDate) {
    $today = date("Y-m-d"); // Joriy sanani olish

    $daysSinceBirth = floor((strtotime($today) - strtotime($birthDate)) / (60 * 60 * 24));

    return $daysSinceBirth;
}

$birthDate = "1990-05-15"; // Tug'ilgan kun

$daysSinceBirth = countDaysSinceBirth($birthDate);

echo "Sizning tug'ilgan kuningizdan boshlab $daysSinceBirth kun o'tdi.";

//4x5 matrisaning minimum elementini topuvchi funksiya yozing (PHP)

function findMinimum($matrix) {
    $min = $matrix[0][0]; // Matrisning birinchi elementini minimum deb olamiz

    // Matrisning har bir elementini tekshirib, minimumni topamiz
    foreach ($matrix as $row) {
        foreach ($row as $element) {
            if ($element < $min) {
                $min = $element;
            }
        }
    }

    return $min;
}

$matrix = array(
    array(5, 8, 3, 2, 7),
    array(4, 9, 1, 6, 3),
    array(2, 7, 6, 4, 1),
    array(9, 5, 2, 3, 8)
);

$minimum = findMinimum($matrix);

echo "Minimum element: " . $minimum;

//Tug‘ilgan kunigizga necha kun qolganini aniqlovchi funksiya yozing (PHP)
function countDaysRemaining($birthDate) {
    $today = new DateTime(); // Joriy sana

    $birthDateTime = new DateTime($birthDate); // Tug'ilgan kun
    $diff = $today->diff($birthDateTime); // Joriy va tug'ilgan kun orasidagi farq

    $daysRemaining = $diff->format('%a'); // Qolgan kunlar soni

    return $daysRemaining;
}

$birthDate = "1990-05-15"; // Tug'ilgan kun

$daysRemaining = countDaysRemaining($birthDate);

echo "Tug'ilgan kuningizga qolgan kunlar soni: " . $daysRemaining;

//Jumladagi belgilarni teskari taribda yuzvchi funksiya yozing (PHP)
function reverseString($sentence) {
    $words = explode(" ", $sentence); // Jumladagi so'zlarni ajratib olish
    $reversedWords = array_map('strrev', $words); // So'zlarni teskari tartibda yuzuvchilash

    $reversedSentence = implode(" ", $reversedWords); // Yuzuvchi so'zlarni jumlaya qaytarish

    return $reversedSentence;
}

$sentence = "Bu jumladagi belgilarni teskari tartibda yuzuvchilash";

$reversedSentence = reverseString($sentence);

echo $reversedSentence;

//Tug‘ilgan yilingizga qarab muchalingizni aniqlovchi funksiya yozing (PHP)

function calculateAgeCategory($birthYear) {
    $currentYear = date('Y'); // Joriy yil
    $age = $currentYear - $birthYear; // Yoshni hisoblash

    $ageCategory = ""; // Yosh kategoriyasi

    if ($age >= 0 && $age <= 2) {
        $ageCategory = "Chaqaloq";
    } elseif ($age >= 3 && $age <= 6) {
        $ageCategory = "Bola";
    } elseif ($age >= 7 && $age <= 12) {
        $ageCategory = "O'g'il bola";
    } elseif ($age >= 13 && $age <= 17) {
        $ageCategory = "Yosh o'g'il";
    } elseif ($age >= 18 && $age <= 25) {
        $ageCategory = "Yosh bola";
    } elseif ($age >= 26) {
        $ageCategory = "Yosh kishi";
    }

    return $ageCategory;
}

$birthYear = 1995; // Tug'ilgan yil

$ageCategory = calculateAgeCategory($birthYear);

echo "Sizning muchalingiz yosh kategoriyasida joylashadi: " . $ageCategory;

//Berilgan sekund qiymatni necha soat va minutga teng bo‘lishini hisoblovchi funksiya yozing (PHP)
function calculateHoursMinutes($seconds) {
    $hours = floor($seconds / 3600); // Soatlar
    $minutes = floor(($seconds % 3600) / 60); // Minutlar

    return [$hours, $minutes];
}

$seconds = 7380; // Berilgan sekund qiymati

list($hours, $minutes) = calculateHoursMinutes($seconds);

echo "Natija: $hours soat, $minutes minut";

//Berilgan so‘zda nechta unli va undosh harf borligini aniqlovchi funksiya yozing (PHP)
function countVowelsAndConsonants($word) {
    $vowels = 0; // Unli harflar
    $consonants = 0; // Undosh harflar

    $word = strtolower($word); // So'zni kichik harflarga o'tkazamiz

    $length = strlen($word); // So'z uzunligi

    for ($i = 0; $i < $length; $i++) {
        $letter = $word[$i];

        if (preg_match("/[aeiou]/", $letter)) {
            $vowels++;
        } elseif (preg_match("/[bcdfghjklmnpqrstvwxyz]/", $letter)) {
            $consonants++;
        }
    }

    return [$vowels, $consonants];
}

$word = "OpenAI"; // Berilgan so'z

list($vowels, $consonants) = countVowelsAndConsonants($word);

echo "Natija: $vowels unli harf, $consonants undosh harf";



