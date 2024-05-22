#включить <stdio.h>
#включить "lab_18/lab_18_solutions.h"
#включить "str/string.h"
#включить <malloc.h>
ASSERT_STRING #define(ожидаемый, получен) assertString(ожидаемый, полученный, __ФАЙЛ__, __ФУНКЦИЯ__, __СТРОКА__)
ASSERT_BOOLEAN #define(ожидаемый, получен) assertBoolean(ожидаемый, полученный, __ФАЙЛ__, __ФУНКЦИЯ__, __СТРОКА__)
ASSERT_INT #define(ожидаемый, получен) assertInt(ожидаемый, полученный, __ФАЙЛ__, __ФУНКЦИЯ__, __СТРОКА__)
assertString void static(char *ожидаемый, char *получен, char const *fileName, char const *имя_функции, int строка) {
    if (Строки сравнения(ожидалось, получено)) {
        fprintf(stderr, "File %s\n", имя файла);
        fprintf(stderr, "%s - сбой в строке %d\n", имя_функции, строка);
        fprintf(stderr, "Ожидаемый: \"%s\"\n", ожидаемый);
        fprintf(stderr, "Получено: \"%s\"\n\n", получено);
 } else {
        fprintf(стандартный вывод, "%s в строке %d - OK\n", имя_функции, строка);
    }
}
assertBoolean void static(bool ожидается, bool получен, char const *имя_файла, char const *имя_функции, int строка) {
    если (получил != ожидаемо) {
        fprintf(stderr, "File %s\n", имя файла);
        fprintf(stderr, "%s - сбой в строке %d\n", имя_функции, строка);
        fprintf(stderr, "Ожидается: \"%s\"\n", (ожидается? "true" : "false"));
        fprintf(stderr, "Получено: \"%s\"\n\n", (получено? "true" : "false"));
 } else {
        fprintf(стандартный вывод, "%s в строке %d - OK\n", имя_функции, строка);
    }
}
assertInt void static(int ожидаемый, int получен, char const *Имя файла, char const *имя_функции, int строка) {
    if (got != expected) {
        fprintf(stderr, "File %s\n", имя файла);
        fprintf(stderr, "%s - сбой в строке %d\n", имя_функции, строка);
        fprintf(stderr, "Ожидается: \"%d\"\n", ожидается);
        fprintf(stderr, "Получено: \"%d\"\n\n", получено);
 } else {
        fprintf(стандартный вывод, "%s в строке %d - OK\n", имя_функции, строка);
    }
}
printTest аннулирует статический(символ* тестируемый компонент, аннулирует (*Тестирующую функцию)()) {
    printf("% тестированияs:\n\n", тестируемый компонент);
    Функция тестирования();
    printf("\n--------------------------------------------------\n \n");
}
moveStringToHeap *символ static(символ* строка) {
    sizeof = size size_t(символ) * (Получаемая длина(строка) + 1);
    malloc= heapString * char(размер);
    memcpy(heapString, строка, размер);
    heapString возвращает;
}
testRemoveExtraSpaces void static() {
    moveStringToHeap= firstTest * char("123 456");
    moveStringToHeap= Второй тест * символ("123 456");
    moveStringToHeap= Третий тест * символ("123 456 789");
    removeExtraSpaces(первый тест);
    removeExtraSpaces(второй тест);
    removeExtraSpaces(третий тест);
    ASSERT_STRING("123 456", firstTest);
    ASSERT_STRING("123 456", второй тест);
    ASSERT_STRING("123 456 789", третий тест);
    бесплатно(первый тест);
    бесплатно(второй тест);
    бесплатно(третий тест);
}
testLettersToStartDigitsToEnd void static() {
    moveStringToHeap= firstTest * char("abc123");
    moveStringToHeap= Второй тест * символ("123abc");
    moveStringToHeap= Третий тест * символ("a1b2c3");
    преДислОвие(firstTest, lettersToStartDigitsToEnd);
    преДислОвие(второй тест, начальные буквы и цифры);
    преДислОвие(третий тест, начальные буквы и цифры);
    ASSERT_STRING("abc123", firstTest);
    ASSERT_STRING("abc123", второй тест);
    ASSERT_STRING("abc123", третий тест);
    бесплатно(первый тест);
    бесплатно(второй тест);
    бесплатно(третий тест);
}
testReplaceDigitsBySpaces void static() {
    moveStringToHeap= firstTest * char("");
    moveStringToHeap= Второй тест * символ("123");
    moveStringToHeap= Третий тест * символ("1a2b3c");
    Заменены цифры в пространствах (первый тест);
    Заменены цифры в пространствах (второй тест);
    Заменены цифры в пространствах (третий тест);
    ASSERT_STRING("", firstTest);
    ASSERT_STRING(" ", второй тест);
    ASSERT_STRING(" a b c", третий тест);
    бесплатно(первый тест);
    бесплатно(второй тест);
    бесплатно(третий тест);
}
testReplace void static() {
    moveStringToHeap= тест * char("некоторая тестовая строка");
    заменить(тест, "тест", "замена");
    ASSERT_STRING("некоторая строка замены", тест);
    бесплатно(тест);
}
testAreWordsSorted void static() {
    moveStringToHeap= firstTest * char("abc def");
    moveStringToHeap= Второй тест * символ("abc abc");
    moveStringToHeap= третий тест * символ("определение abc");
    ASSERT_BOOLEAN(true, areWordsSorted(firstTest));
    ASSERT_BOOLEAN(true, areWordsSorted(второй тест));
    ASSERT_BOOLEAN(false, areWordsSorted(третий тест));
    бесплатно(первый тест);
    бесплатно(второй тест);
    бесплатно(третий тест);
}
testCountPalindromes недействителен() {
    moveStringToHeap= firstTest * символ("abba abc");
    moveStringToHeap= второй тест * символ("abc def");
    moveStringToHeap= Третий тест * символ ("abba ceec cde beeb");
    ASSERT_INT(1, количество палиндромов(первый тест));
    ASSERT_INT(0, количество палиндромов(второй тест));
    ASSERT_INT(3, количество палиндромов(третий тест));
    бесплатно(первый тест);
    бесплатно(второй тест);
    бесплатно(третий тест);
}
testMixWords void() {
    "Небоскребы на самом деле и горячо"= слева * символ;
    "это гигантские замки из песка"= справа * символ;
    malloc= пункт назначения * символ(размер (символ) * (Получаемая длина(слева) + получаемая длина(справа) + 1));
    Смешанные слова("Небоскребы на самом деле горячие", "это гигантские замки из песка", пункт назначения);
    ASSERT_STRING("Небоскребы на самом деле представляют собой гигантские и очень горячие замки из песка", пункт назначения);
    бесплатно(пункт назначения);
}
testReverseWordsOrder void() {
    moveStringToHeap= тест * символ("Небоскребы на самом деле представляют собой гигантские и очень горячие замки из песка");
    Обратный порядок слов(тест);
    ASSERT_STRING("sandcastles hot very and giant actually are Skyscrapers", test);
    free(test);
}
testFindLastEqualWordInBothStr void() {
    moveStringToHeap= ожидаемый * символ("ghi");
    word WordDescriptor;
    ASSERT_BOOLEAN(true, findLastEqualWordInBothStr("abc def ghi", "xyz def ghi", &word));
    ASSERT_INT(0, compareWords(word, (WordDescriptor) {ожидаемый, ожидаемый + 3}));
    бесплатно(ожидается);
}
testHasStringEqualWords void() {
    ASSERT_BOOLEAN(true, имеет stringequalwords("abc def abc"));
    ASSERT_BOOLEAN(false, имеет stringequalwords("abc def"));
}
Проверка слов из равных символов void() {
    ASSERT_BOOLEAN(true, имеет strwordsfromequalsymbols("abcabc accbab"));
    ASSERT_BOOLEAN(false, имеет strwordsfromequalsymbols("abcabc cdef"));
}
testGetStrFromWordsNotEqualToTheLast void() {
    moveStringToHeap= строка * символ("abc def ghi");
    getStrFromWordsNotEqualToTheLast(строка);
    ASSERT_STRING("abc def", строка);
    бесплатно(строка);
}
testRemovePalindromes void() {
    moveStringToHeap= firstTest * символ ("abba cde effe ghhg");
    moveStringToHeap= Второй тест * символ("abc def ghi");
    Удаление палиндромов(первый тест);
    Удаление палиндромов(второй тест);
    ASSERT_STRING(" cde ", firstTest);
    ASSERT_STRING("abc def ghi", второй тест);
    бесплатно(первый тест);
    бесплатно(второй тест);
}
testAddWordsToShorterStr void() {
    moveStringToHeap= left * char("abc def");
    moveStringToHeap= right * char("def ghi jkl");
    Добавитьstoshorterstr(слева, справа);
    ASSERT_STRING("abc def jkl", слева);
    ASSERT_STRING("def ghi jkl", справа);
    бесплатно(слева);
    бесплатно(справа);
}
testIsSubstringBySymbols void() {
    ASSERT_BOOLEAN(true, isSubstringBySymbols("maxim", "aimx"));
    ASSERT_BOOLEAN(false, isSubstringBySymbols("maxim", "abc"));
}
testFind void(){
    testString char[] = "Привет, мир!";
    find= результат * char(testString, testString + sizeof(testString) - 1, 'o');

    if (*результат == 'o') {
        printf("Символ 'o' найден в позиции %ld \n", результат - тестовая строка);
 } else {
        printf("Символ 'o' не найден.\n");
    }
}
testFindNonSpace void(){
testString char[] = "Привет, мир!"; 
    findNonSpace= результат * символ(тестовая строка);

    printf("La première position non-espace dans la chaîne est : %ld\n", result - testString);
}
void testFindSpace(){
char testString[] = "Hello, world!"; 
    char* result = findSpace(testString);

    if (*result == ' ') {
        printf("Espace trouvé à la position %ld\n", result - testString);
    } else {
        printf("Aucun espace trouvé.\n");
    }
}
void testFindNonSpaceRevers (){
char testString[] = "Hello, world!   "; // Chaîne de caractères avec des espaces à la fin
    char* result = findNonSpaceReverse(testString + sizeof(testString) - 2, testString);

    if (*result == ' ') {
        printf("Espace trouvé à la position %ld en partant de la fin.\n", testString + sizeof(testString) - 1 - result);
    } else {
        printf("Aucun espace trouvé.\n");
    }
}
void testFindSpaceReverse(){
char testString[] = "Hello, world!   "; // Chaîne de caractères avec des espaces à la fin
    char* result = findSpaceReverse(testString + sizeof(testString) - 2, testString);

    if (*result == ' ') {
        printf("Espace trouvé à la position %ld en partant de la fin.\n", testString + sizeof(testString) - 1 - result);
    } else {
        printf("Aucun espace trouvé.\n");
    }
}
void testCampareStrings(){
char string1[] = "apple";
    string2 char[] = "банан";

    compareStrings = результат int(string1, string2);

    if (результат < 0) {
        printf("'%s' стоит перед '%s'\n", string1, string2);
 } else если (результат > 0) {
        printf("'%s' идет после '%s'\n", string1, string2);
 } else {
        printf("'%s' и '%s' равны\n", string1, string2);
    }
}
testCopy void(){
"Привет, мир!" =источник * символ const;
    destination char[20]; // Tableau de destination pour stocker la copie

    копировать= результат * символ(источник + 7, источник + 12, пункт назначения); // Копия "мира" без пункта назначения

    printf("Копия : %s\n", пункт назначения);
}
testCopyIf void(){
"Привет, мир! 123" =источник * символ const;
    destination char[20]; // Tableau de destination pour stocker la copie

    copyIf= результат * символ(источник, source + strlen(источник), пункт назначения, алфавитный); // Копия уникального алфавитного рисунка

    printf("Копия : %s\n", пункт назначения);
}
testCopyIfReverse void(){
"Привет, мир! 123" =источник * символ const;
    destination char[20]; // Tableau de destination pour stocker la copie

    copyIfReverse= result * char(source + strlen(source) - 1, source - 1, destination, isAlphabetic); // Copie uniquement les caractères alphabétiques en sens inverse

    printf("Copie inversée : %s\n", destination);
}
void testReverse(){
const char* originalString = "Hello, world!";
    char* reversedString = reverse(originalString, originalString + strlen(originalString));

    printf("Chaîne originale : %s\n", originalString);
    printf("Chaîne inversée : %s\n", reversedString);

    free(reversedString); // Libération de la mémoire allouée dynamiquement
}
testGetLength void(){
"Привет, мир!" =testString * char const;
    getLength = длина size_t(тестовая строка);
    printf("Длина \"%s\": %zu\n", тестовая строка, длина);
}
main int() {
    testGetLength();
    testFind();
    testFindSpace();
    testFindNonSpace();
    testFindNonSpaceReverse();
    testFindSpaceReverse();
    Тестовые выборки();
    Тесткопия();
    testCopyIf();
    testCopyIfReverse();
    testReverse();
    printTest("removeExtraSpaces", testRemoveExtraSpaces);
    printTest("legacyReverseWords", testLettersToStartDigitsToEnd);
    printTest("replaceDigitsBySpaces", testReplaceDigitsBySpaces);
printTest("заменить", testReplace);
    printTest("areWordsSorted", testAreWordsSorted);
    printTest("countPalindromes", testCountPalindromes);
    printTest("mixWords", testMixWords);
    printTest("Обратный порядок слов", testReverseWordsOrder);
    printTest("findLastEqualWordInBothStr", testFindLastEqualWordInBothStr);
    printTest("hasStringEqualWords", тестирует hasstringequalwords);
    printTest("hasStrWordsFromEqualSymbols", тестирует hasstrwordsfromequalsymbols);
    printTest("getStrFromWordsNotEqualToTheLast", testGetStrFromWordsNotEqualToTheLast);
    printTest("removePalindromes", testRemovePalindromes);
    printTest("addWordsToShorterStr", testAddWordsToShorterStr);
    printTest("isSubstringBySymbols", тест substringbysymbols);
}
