//Tug‘ilgan kunigizga necha kun bo‘lganini aniqlovchi funksiya yozing (JS)

function countDaysSinceBirth(birthDate) {
    const today = new Date(); // Joriy sanani olish
  
    const diffInMilliseconds = today - new Date(birthDate);
    const diffInDays = Math.floor(diffInMilliseconds / (1000 * 60 * 60 * 24));
  
    return diffInDays;
  }
  
  const birthDate = "1990-05-15"; // Tug'ilgan kun
  
  const daysSinceBirth = countDaysSinceBirth(birthDate);
  
  console.log(`Sizning tug'ilgan kuningizdan boshlab ${daysSinceBirth} kun o'tdi.`);
  
  //Tug‘ilgan kunigizga necha kun qolganini aniqlovchi funksiya yozing (JS)

  function countDaysRemaining(birthDate) {
    const today = new Date(); // Joriy sana
  
    const birthDateTime = new Date(birthDate); // Tug'ilgan kun
    const diffInMilliseconds = birthDateTime - today; // Joriy va tug'ilgan kun orasidagi vaqtni millesaniyada hisoblaymiz
  
    const diffInDays = Math.ceil(diffInMilliseconds / (1000 * 60 * 60 * 24)); // Qolgan kunlar sonini hisoblaymiz
  
    return diffInDays;
  }
  
  const birthDate = "1990-05-15"; // Tug'ilgan kun
  
  const daysRemaining = countDaysRemaining(birthDate);
  
  console.log(`Tug'ilgan kuningizga qolgan kunlar soni: ${daysRemaining}`);

  //Jumladagi belgilarni teskari taribda yuzvchi funksiya yozing 
  function reverseString(sentence) {
    const words = sentence.split(" "); // Jumladagi so'zlarni ajratib olish
    const reversedWords = words.map(word => word.split("").reverse().join("")); // So'zlarni teskari tartibda yuzuvchilash
  
    const reversedSentence = reversedWords.join(" "); // Yuzuvchi so'zlarni jumlaya qaytarish
  
    return reversedSentence;
  }
  
  const sentence = "Bu jumladagi belgilarni teskari tartibda yuzuvchilash";
  
  const reversedSentence = reverseString(sentence);
  
  console.log(reversedSentence);

  //Tug‘ilgan yilingizga qarab muchalingizni aniqlovchi funksiya yozing (JS)

  function calculateAgeCategory(birthYear) {
    const currentYear = new Date().getFullYear(); // Joriy yil
    const age = currentYear - birthYear; // Yoshni hisoblash
  
    let ageCategory = ""; // Yosh kategoriyasi
  
    if (age >= 0 && age <= 2) {
      ageCategory = "Chaqaloq";
    } else if (age >= 3 && age <= 6) {
      ageCategory = "Bola";
    } else if (age >= 7 && age <= 12) {
      ageCategory = "O'g'il bola";
    } else if (age >= 13 && age <= 17) {
      ageCategory = "Yosh o'g'il";
    } else if (age >= 18 && age <= 25) {
      ageCategory = "Yosh bola";
    } else if (age >= 26) {
      ageCategory = "Yosh kishi";
    }
  
    return ageCategory;
  }
  
  const birthYear = 1995; // Tug'ilgan yil
  
  const ageCategory = calculateAgeCategory(birthYear);
  
  console.log(`Sizning muchalingiz yosh kategoriyasida joylashadi: ${ageCategory}`);

  //Berilgan sekund qiymatni necha soat va minutga teng bo‘lishini hisoblovchi funksiya yozing 
  function calculateHoursMinutes(seconds) {
    const hours = Math.floor(seconds / 3600); // Soatlar
    const minutes = Math.floor((seconds % 3600) / 60); // Minutlar
  
    return [hours, minutes];
  }
  
  const seconds = 7380; // Berilgan sekund qiymati
  
  const [hours, minutes] = calculateHoursMinutes(seconds);
  
  console.log(`Natija: ${hours} soat, ${minutes} minut`);
  //Berilgan so‘zda nechta unli va undosh harf borligini aniqlovchi funksiya yozing (JS)
  function countVowelsAndConsonants(word) {
    let vowels = 0; // Unli harflar
    let consonants = 0; // Undosh harflar
  
    word = word.toLowerCase(); // So'zni kichik harflarga o'tkazamiz
  
    for (let i = 0; i < word.length; i++) {
      let letter = word[i];
  
      if (/[aeiou]/.test(letter)) {
        vowels++;
      } else if (/[bcdfghjklmnpqrstvwxyz]/.test(letter)) {
        consonants++;
      }
    }
  
    return [vowels, consonants];
  }
  
  const word = "OpenAI"; // Berilgan so'z
  
  const [vowels, consonants] = countVowelsAndConsonants(word);
  
  console.log(`Natija: ${vowels} unli harf, ${consonants} undosh harf`);
