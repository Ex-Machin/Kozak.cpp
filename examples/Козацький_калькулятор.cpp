отаман_головний() {
    вперед_козаки;

    велика_дробова борщ, сало, результат;
    сказати << "Введіть кількість борщу: ";
    слухати >> борщ;
    сказати << "Введіть кількість сала: ";
    слухати >> сало;

    якщо (сало == нуль) {
        сказати << "Без сала — не козацький обід!" << курінь_новий;
    } анумо {
        результат = борщ + сало * 10; // Бо сало — це сила!
        сказати << "Загальна козацька сила: " << результат << курінь_новий;
    }

    повернути нуль;
}

