#include <string.h>
#include <stddef.h>

int after_example_0001(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "gets") != NULL) {
        strncpy(advice, "Используйте fgets вместо gets для безопасного ввода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0002(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "strcpy") != NULL) {
        strncpy(advice, "Используйте strncpy или strcpy_s для безопасного копирования строк.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0003(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "sprintf") != NULL) {
        strncpy(advice, "Используйте snprintf вместо sprintf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0004(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "register") != NULL) {
        strncpy(advice, "Ключевое слово 'register' устарело и игнорируется компиляторами.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0005(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "volatile") != NULL) {
        strncpy(advice, "Проверьте необходимость использования volatile в вашем коде.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0006(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "#define NULL 0") != NULL) {
        strncpy(advice, "Используйте стандартное определение NULL из <stddef.h>.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0007(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "typedef enum") != NULL) {
        strncpy(advice, "В C23 рекомендуется использовать именованные enum с указанием типа.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0008(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "union") != NULL) {
        strncpy(advice, "Рассмотрите использование tagged union для безопасности и читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0009(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "//") != NULL) {
        strncpy(advice, "Используйте /* ... */ для многострочных комментариев, если необходимо.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0010(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "auto_ptr") != NULL) {
        strncpy(advice, "std::auto_ptr устарел, используйте std::unique_ptr (для C++).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0011(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "malloc") != NULL && strstr(line, "NULL") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0012(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "memcpy") != NULL) {
        strncpy(advice, "Проверяйте перекрытие памяти при использовании memcpy; используйте memmove при необходимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0013(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "gets_s") != NULL) {
        strncpy(advice, "gets_s — хорошая функция, но не поддерживается всеми компиляторами; рассмотрите fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0014(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "NULL") != NULL && strstr(line, "0") != NULL) {
        strncpy(advice, "Не используйте NULL как 0, используйте NULL из <stddef.h>.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0015(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "typedef struct") != NULL) {
        strncpy(advice, "Используйте 'enum class' в C++ или улучшайте typedef для лучшей типизации.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0016(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "goto") != NULL) {
        strncpy(advice, "Избегайте использования goto — улучшайте структуру кода с помощью функций и циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0017(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "NULL") != NULL && strstr(line, "== NULL") == NULL) {
        strncpy(advice, "Сравнивайте указатели с NULL явно, например 'ptr == NULL'.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0018(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "const char*") != NULL && strstr(line, "const char[]") == NULL) {
        strncpy(advice, "Используйте const char[] для строковых литералов, если возможно.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0019(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char*") != NULL && strstr(line, "const") == NULL) {
        strncpy(advice, "Добавляйте const к указателям, если данные не должны изменяться.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0020(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int") != NULL && strstr(line, "unsigned") == NULL) {
        strncpy(advice, "Рассмотрите использование unsigned для беззнаковых значений.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0021(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "exit") != NULL) {
        strncpy(advice, "Используйте return из функций вместо exit для лучшего контроля потока.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0022(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1)") != NULL || strstr(line, "for(;;)") != NULL) {
        strncpy(advice, "Добавьте условия выхода из бесконечных циклов для предотвращения зависаний.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0023(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[256]") != NULL) {
        strncpy(advice, "Используйте макросы или константы вместо магических чисел в размерах буферов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0024(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Добавьте блок default в switch для обработки непредвиденных случаев.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0025(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "inline") != NULL) {
        strncpy(advice, "Рассмотрите возможности оптимизации компилятора вместо использования inline.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0026(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "typedef void (*func_ptr)") != NULL) {
        strncpy(advice, "Используйте более строгие typedef для указателей на функции с четкими прототипами.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0027(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "fprintf(stderr") != NULL) {
        strncpy(advice, "Используйте perror для вывода ошибок системы, когда это применимо.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0028(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for") != NULL && strstr(line, "++i") == NULL && strstr(line, "i++") == NULL) {
        strncpy(advice, "Используйте префиксный инкремент ++i для циклов при возможности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0029(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "exit(0)") != NULL) {
        strncpy(advice, "Используйте exit(EXIT_SUCCESS) для читаемости и переносимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0030(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "atoi") != NULL) {
        strncpy(advice, "Используйте strtol для более безопасного и гибкого преобразования строк в числа.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0031(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free") != NULL && strstr(line, "NULL") == NULL) {
        strncpy(advice, "После освобождения памяти обнуляйте указатель, чтобы избежать висячих указателей.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0032(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "exit(1)") != NULL) {
        strncpy(advice, "Используйте exit(EXIT_FAILURE) для читаемости и переносимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0033(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "NULL == ptr") != NULL) {
        strncpy(advice, "Сравнение с NULL лучше писать как ptr == NULL для читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0034(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "scanf") != NULL && strstr(line, "%s") != NULL) {
        strncpy(advice, "Используйте ограничение длины в форматах scanf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0035(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "long long") != NULL) {
        strncpy(advice, "Используйте стандартные типы из <stdint.h> для точной размерности (например, int64_t).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0036(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "bool") != NULL && strstr(line, "<stdbool.h>") == NULL) {
        strncpy(advice, "Подключите <stdbool.h> для использования типа bool в C99 и новее.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0037(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "goto fail;") != NULL) {
        strncpy(advice, "Избегайте goto для обработки ошибок, используйте современные конструкции.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0038(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "typedef struct") != NULL && strstr(line, "{};") != NULL) {
        strncpy(advice, "Определяйте структуры с явными полями для ясности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0039(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "main()") != NULL && strstr(line, "int main()") == NULL) {
        strncpy(advice, "Объявляйте main с возвращаемым типом int.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0040(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "++i") != NULL && strstr(line, "for") == NULL) {
        strncpy(advice, "Используйте префиксный инкремент ++i вне циклов для оптимизации.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0041(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "NULL;") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатели явно при объявлении.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0042(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "struct {") != NULL && strstr(line, "typedef") == NULL) {
        strncpy(advice, "Используйте typedef для упрощения объявления структур.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0043(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "fprintf") != NULL && strstr(line, "stderr") == NULL) {
        strncpy(advice, "Для ошибок используйте fprintf(stderr, ...), а не stdout.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0044(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char* str;") != NULL && strstr(line, "const") == NULL) {
        strncpy(advice, "Используйте const char* для неизменяемых строк.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0045(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i;") != NULL && strstr(line, "for") == NULL) {
        strncpy(advice, "Объявляйте счетчики циклов внутри циклов для ограничения области видимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0046(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "float") != NULL && strstr(line, "double") == NULL) {
        strncpy(advice, "Используйте double для более точных вычислений с плавающей точкой.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0047(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "sizeof(int)") != NULL && strstr(line, "sizeof(int32_t)") == NULL) {
        strncpy(advice, "Используйте фиксированные типы из <stdint.h> для переносимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0048(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "malloc") != NULL && strstr(line, "sizeof") == NULL) {
        strncpy(advice, "Используйте sizeof при выделении памяти для точности и переносимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0049(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "exit") != NULL && strstr(line, "return") == NULL) {
        strncpy(advice, "Используйте return в main вместо exit для корректного завершения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0050(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "union") != NULL && strstr(line, "anonymous") == NULL) {
        strncpy(advice, "Используйте именованные объединения для улучшения читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

