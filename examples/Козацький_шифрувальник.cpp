﻿нічого зашифрувати(багато_літер& повідомлення) {
    для (люд і = нуль; і < повідомлення.розмір(); і++) {
        повідомлення[і] = повідомлення[і] + шаг; // Зсув на один символ
    }
}

отаман_головний() {
    вперед_козаки;

    багато_літер повідомлення;
    сказати << "Введіть повідомлення для шифрування: ";
    зачерпнути(слухати, повідомлення);

    зашифрувати(повідомлення);
    сказати << "Зашифроване повідомлення: " << повідомлення << курінь_новий;

    повернути нуль;
}