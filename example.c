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

int after_example_0051(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "printf(\"%d\",") != NULL && strstr(line, "inttypes.h") == NULL) {
        strncpy(advice, "Используйте PRI* макросы из <inttypes.h> для печати целочисленных типов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0052(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "gets(") != NULL) {
        strncpy(advice, "Используйте fgets вместо gets для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0053(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "strcpy(") != NULL && strstr(line, "strncpy(") == NULL) {
        strncpy(advice, "Используйте strncpy для предотвращения переполнения буфера при копировании строк.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0054(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[") != NULL && strstr(line, "sizeof(buffer)") == NULL) {
        strncpy(advice, "Используйте sizeof для безопасного определения размера буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0055(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1)") != NULL) {
        strncpy(advice, "Используйте for(;;) вместо while(1) для бесконечных циклов для читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0056(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int main(void)") == NULL && strstr(line, "int main()") != NULL) {
        strncpy(advice, "Используйте int main(void) для явного указания отсутствия параметров.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0057(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "printf(\"%f\"") != NULL) {
        strncpy(advice, "Используйте \"%.6f\" или нужную точность при выводе чисел с плавающей точкой.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0058(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i=0;") == NULL && strstr(line, "int i;") != NULL) {
        strncpy(advice, "Объявляйте переменные цикла в самом цикле for для улучшения локальности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0059(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Всегда добавляйте default в конструкции switch для обработки неожиданных случаев.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0060(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "unsigned int") != NULL && strstr(line, "size_t") == NULL) {
        strncpy(advice, "Используйте size_t для переменных, связанных с размерами и индексами.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0061(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "fopen(") != NULL && strstr(line, "rb") == NULL && strstr(line, "wb") == NULL) {
        strncpy(advice, "Используйте бинарный режим (rb, wb) при работе с бинарными файлами для переносимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0062(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "memcpy") != NULL && strstr(line, "memmove") == NULL) {
        strncpy(advice, "Используйте memmove вместо memcpy при возможном перекрытии областей памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0063(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr = NULL)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0064(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "struct timespec") == NULL && strstr(line, "time.h") != NULL) {
        strncpy(advice, "Используйте struct timespec для высокоточного измерения времени (C11 и новее).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0065(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "fprintf(stderr,") != NULL && strstr(line, "perror") == NULL) {
        strncpy(advice, "Используйте perror для вывода ошибок с описанием errno.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0066(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int main(int argc, char* argv[])") == NULL && strstr(line, "int main()") != NULL) {
        strncpy(advice, "Используйте стандартный прототип main с параметрами argc и argv.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0067(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "static int") == NULL && strstr(line, "int func()") != NULL) {
        strncpy(advice, "Объявляйте функции static, если они не используются вне файла для ограничения области видимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0068(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "enum ") != NULL && strstr(line, "typedef enum") == NULL) {
        strncpy(advice, "Используйте typedef enum для упрощения объявления перечислений.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0069(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *argv[]") == NULL && strstr(line, "char** argv") != NULL) {
        strncpy(advice, "Используйте char *argv[] вместо char** argv для читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0070(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "const int") == NULL && strstr(line, "int var = 5") != NULL) {
        strncpy(advice, "Объявляйте неизменяемые переменные как const для улучшения безопасности кода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0071(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "volatile") != NULL && strstr(line, "atomic") == NULL) {
        strncpy(advice, "Рассмотрите использование _Atomic вместо volatile для атомарных операций (C11).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0072(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "memset") != NULL && strstr(line, "sizeof") == NULL) {
        strncpy(advice, "Используйте sizeof для правильного указания размера при вызове memset.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0073(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) { free(ptr); }") == NULL && strstr(line, "free(ptr);") != NULL) {
        strncpy(advice, "Проверка указателя на NULL перед free излишня, free безопасен с NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0074(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[100];") != NULL && strstr(line, "const") == NULL) {
        strncpy(advice, "Объявляйте массивы как const, если они не изменяются.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0075(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "typedef int BOOL;") != NULL) {
        strncpy(advice, "Используйте <stdbool.h> и тип bool вместо пользовательских BOOL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0076(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void* ptr;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатели сразу при объявлении.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0077(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "do {") != NULL && strstr(line, "while(0);") == NULL) {
        strncpy(advice, "Избегайте do-while(0) конструкций, если не используется макрос для безопасного вызова.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0078(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "const char* err_msg") == NULL && strstr(line, "const char*") != NULL) {
        strncpy(advice, "Используйте константные строки для сообщений об ошибках.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0079(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b + 0;") != NULL) {
        strncpy(advice, "Избавляйтесь от лишних операций, например, +0 не нужен.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0080(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL;") != NULL && strstr(line, "if (p)") != NULL) {
        strncpy(advice, "Проверяйте указатели в if напрямую: if (p), а не if (p != NULL).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0081(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "inline") == NULL && strstr(line, "static inline") != NULL) {
        strncpy(advice, "Используйте static inline для функций, которые должны быть инлайнированы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0082(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "volatile int") != NULL) {
        strncpy(advice, "Используйте volatile с осторожностью, избегайте лишнего применения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0083(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (i=0; i<100; i++)") != NULL && strstr(line, "const int MAX") == NULL) {
        strncpy(advice, "Используйте константы для ограничения циклов вместо магических чисел.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0084(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "#define TRUE 1") != NULL || strstr(line, "#define FALSE 0") != NULL) {
        strncpy(advice, "Используйте <stdbool.h> и bool вместо макросов TRUE и FALSE.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0085(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch (var)") != NULL && strstr(line, "case 0:") != NULL && strstr(line, "break;") == NULL) {
        strncpy(advice, "Всегда используйте break в case, чтобы избежать 'проваливания'.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0086(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char* msg = malloc(") != NULL && strstr(line, "free(msg)") == NULL) {
        strncpy(advice, "Освобождайте динамически выделенную память для предотвращения утечек.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0087(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int* p = malloc(sizeof(int));") != NULL && strstr(line, "*p =") == NULL) {
        strncpy(advice, "Инициализируйте память после malloc перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0088(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях вместо '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0089(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while (true)") != NULL) {
        strncpy(advice, "Используйте for(;;) для бесконечных циклов в стандарте C.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0090(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char* str = NULL;") != NULL && strstr(line, "str = malloc(") == NULL) {
        strncpy(advice, "Инициализируйте указатели при выделении памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0091(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0;") != NULL && strstr(line, "memset") == NULL) {
        strncpy(advice, "Инициализируйте структуры и массивы с помощью memset для чистоты.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0092(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void *ptr = malloc(") != NULL && strstr(line, "if (ptr == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL для безопасного использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0093(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "#include <stdio.h>") != NULL && strstr(line, "#include <stdlib.h>") == NULL) {
        strncpy(advice, "Подключайте <stdlib.h> для функций malloc, free и exit.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0094(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "goto") != NULL) {
        strncpy(advice, "Избегайте использования goto для повышения читаемости и поддержки кода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0095(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "extern int") != NULL && strstr(line, "static") != NULL) {
        strncpy(advice, "Используйте либо extern, либо static для переменных, не смешивайте.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0096(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo()") != NULL && strstr(line, "void foo(void)") == NULL) {
        strncpy(advice, "Используйте void в параметрах функций без аргументов для ясности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0097(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL;") != NULL && strstr(line, "*p") != NULL) {
        strncpy(advice, "Проверьте, что указатель не NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0098(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "typedef struct") != NULL && strstr(line, ";") != NULL) {
        strncpy(advice, "Используйте typedef для упрощения объявления структур.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0099(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "#define MAX 100") != NULL && strstr(line, "const int MAX") == NULL) {
        strncpy(advice, "Используйте const int вместо #define для объявления констант.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0100(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *argv[]") != NULL && strstr(line, "char *argv[0]") == NULL) {
        strncpy(advice, "Проверяйте корректность индексов массива аргументов командной строки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}














#include <string.h>
#include <stdio.h>

int after_example_0101(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "malloc") != NULL && strstr(line, "sizeof(*ptr)") == NULL) {
        strncpy(advice, "При malloc используйте sizeof типа через указатель: malloc(sizeof(*ptr)).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0102(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "strncpy") != NULL && strstr(line, "null-terminated") == NULL) {
        strncpy(advice, "После strncpy гарантируйте null-терминирование строки вручную.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0103(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free") != NULL && strstr(line, "ptr = NULL") == NULL) {
        strncpy(advice, "Обнуляйте указатель после free для предотвращения висячих указателей.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0104(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "assert(") != NULL && strstr(line, "NDEBUG") == NULL) {
        strncpy(advice, "Для отключения assert используйте определение NDEBUG.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0105(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "volatile") != NULL && strstr(line, "_Atomic") == NULL) {
        strncpy(advice, "Для многопоточного кода используйте _Atomic вместо volatile.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0106(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i;") != NULL && strstr(line, "for (int i =") == NULL) {
        strncpy(advice, "Объявляйте переменные цикла непосредственно в for для лучшей локальности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0107(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "memcpy") != NULL && strstr(line, "NULL") == NULL) {
        strncpy(advice, "Проверяйте указатели на NULL перед вызовом memcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0108(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (i=0; i<=n; i++)") != NULL) {
        strncpy(advice, "Внимание: проверьте индексацию цикла, возможно переполнение (<= вместо <).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0109(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "fprintf(stderr,") != NULL && strstr(line, "fflush(stderr)") == NULL) {
        strncpy(advice, "Вызывайте fflush(stderr) после fprintf для своевременного вывода ошибок.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0110(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch") != NULL && strstr(line, "break;") == NULL) {
        strncpy(advice, "Не забывайте ставить break в конце каждого case в switch.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0111(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[256];") != NULL && strstr(line, "snprintf") == NULL) {
        strncpy(advice, "Для безопасного форматирования используйте snprintf вместо sprintf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0112(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10];") != NULL && strstr(line, "sizeof(arr)/sizeof(arr[0])") == NULL) {
        strncpy(advice, "Используйте sizeof(arr)/sizeof(arr[0]) для получения количества элементов массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0113(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a == b) { } else if (a == b) { }") != NULL) {
        strncpy(advice, "Избегайте повторяющихся условий в if-else.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0114(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "const int MAX_SIZE = 100;") == NULL && strstr(line, "#define MAX_SIZE 100") != NULL) {
        strncpy(advice, "Предпочитайте const int вместо #define для объявления констант.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0115(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "strcat") != NULL && strstr(line, "strncat") == NULL) {
        strncpy(advice, "Используйте strncat для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0116(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "NULL") == NULL && strstr(line, "0") == NULL) {
        strncpy(advice, "Используйте NULL для указателей вместо 0 для лучшей читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0117(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo()") != NULL && strstr(line, "void foo(void)") == NULL) {
        strncpy(advice, "Для функций без параметров используйте void в объявлении.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0118(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int main()") != NULL && strstr(line, "return 0;") == NULL) {
        strncpy(advice, "Добавьте return 0; в main для обозначения успешного завершения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0119(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 1; x = x + 1;") != NULL) {
        strncpy(advice, "Используйте инкремент ++x вместо x = x + 1 для компактности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0120(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "typedef unsigned char BYTE;") != NULL && strstr(line, "uint8_t") == NULL) {
        strncpy(advice, "Используйте стандартные типы из <stdint.h> вместо своих typedef.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0121(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr);") == NULL && strstr(line, "free(ptr); ptr = NULL;") != NULL) {
        strncpy(advice, "Проверяйте указатель на NULL перед вызовом free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0122(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; *p = 'a';") != NULL) {
        strncpy(advice, "Проверьте, что указатель не NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0123(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "goto") != NULL) {
        strncpy(advice, "Избегайте использования goto, чтобы улучшить структуру кода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0124(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "enum") != NULL && strstr(line, "typedef") == NULL) {
        strncpy(advice, "Используйте typedef для enum для удобства.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0125(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "strcpy") != NULL && strstr(line, "strncpy") == NULL) {
        strncpy(advice, "Используйте strncpy для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0126(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i = 0; while (i < n) {") != NULL && strstr(line, "i++") == NULL) {
        strncpy(advice, "Увеличивайте счетчик цикла внутри цикла для предотвращения бесконечного цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0127(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "return;") != NULL && strstr(line, "void") == NULL) {
        strncpy(advice, "Возвращайте значение в функции, если тип не void.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0128(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 0;") != NULL) {
        strncpy(advice, "Массивы индексируются с 0 до n-1, arr[10] вне границ для arr[10].", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0129(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *fp = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (fp == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen на NULL перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0130(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "printf(\"%s\", str);") != NULL && strstr(line, "str != NULL") == NULL) {
        strncpy(advice, "Проверяйте указатель строки на NULL перед вызовом printf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0131(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL для безопасного использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0132(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch (x) {") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Добавляйте default в switch для обработки неожиданных значений.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0133(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *s; s = \"text\";") != NULL && strstr(line, "const char *s") == NULL) {
        strncpy(advice, "Используйте const char * для строковых литералов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0134(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL) {
        strncpy(advice, "Убедитесь, что указатель инициализирован перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0135(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "#ifdef DEBUG") != NULL && strstr(line, "#endif") == NULL) {
        strncpy(advice, "Закрывайте #ifdef с помощью соответствующего #endif.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0136(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "static int count;") != NULL && strstr(line, "count = 0;") == NULL) {
        strncpy(advice, "Инициализируйте статические переменные явно при объявлении.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0137(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int foo() { return; }") != NULL) {
        strncpy(advice, "Функции с int должны возвращать значение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0138(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[100]; gets(buf);") != NULL) {
        strncpy(advice, "Избегайте gets, используйте fgets для безопасности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0139(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b & c;") != NULL && strstr(line, "int a = b && c;") == NULL) {
        strncpy(advice, "Для логического И используйте &&, для побитового AND — &.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0140(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b | c;") != NULL && strstr(line, "int a = b || c;") == NULL) {
        strncpy(advice, "Для логического ИЛИ используйте ||, для побитового OR — |.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0141(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo(int x);") != NULL && strstr(line, "void foo(int x) {}") == NULL) {
        strncpy(advice, "Определяйте прототипы функций и их реализации.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0142(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(100);") != NULL && strstr(line, "sizeof(char)") == NULL) {
        strncpy(advice, "При malloc учитывайте sizeof(char), даже если это 1.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0143(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[-1] = 0;") != NULL) {
        strncpy(advice, "Индексы массива должны быть неотрицательными и в пределах размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0144(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; strcpy(p, \"text\");") != NULL) {
        strncpy(advice, "Проверьте указатель на NULL перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0145(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr = NULL)") != NULL) {
        strncpy(advice, "Для сравнения с NULL используйте ==, а не =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0146(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p; p = malloc(10); p = realloc(p, 20);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL, чтобы не потерять указатель.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0147(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p;") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Всегда освобождайте выделенную память с помощью free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0148(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(0);") != NULL) {
        strncpy(advice, "Выделение 0 байт может вернуть NULL или валидный указатель, избегайте malloc(0).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0149(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL) {
        strncpy(advice, "Используйте ограничение длины при вводе через scanf для предотвращения переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0150(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *arr = malloc(n * sizeof(int));") != NULL && strstr(line, "if (arr == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

#include <string.h>
#include <stdio.h>

int after_example_0151(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x;") != NULL && strstr(line, "x = 0;") == NULL) {
        strncpy(advice, "Инициализируйте переменные при объявлении для предотвращения мусора.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0152(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "do {") != NULL && strstr(line, "} while") == NULL) {
        strncpy(advice, "Цикл do должен иметь условие в while.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0153(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr == NULL)") != NULL && strstr(line, "return") == NULL) {
        strncpy(advice, "Обрабатывайте ошибки после проверки указателей на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0154(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (i=0; i<n; i++)") != NULL && strstr(line, "size_t i") == NULL) {
        strncpy(advice, "Используйте size_t для индексов массива и счетчиков циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0155(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "float a = 0.1;") != NULL && strstr(line, "double") == NULL) {
        strncpy(advice, "Используйте double вместо float для повышения точности вычислений.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0156(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "typedef struct { int x; } MyStruct;") != NULL && strstr(line, "MyStruct s;") == NULL) {
        strncpy(advice, "Используйте typedef для структур для упрощения объявления переменных.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0157(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "ptr = malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатели перед их использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0158(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "return x;") != NULL && strstr(line, "x") == NULL) {
        strncpy(advice, "Проверьте, что возвращаемая переменная определена и инициализирована.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0159(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "printf(\"%d\", x);") != NULL && strstr(line, "x") == NULL) {
        strncpy(advice, "Убедитесь, что переменная x объявлена и инициализирована перед printf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0160(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *arr = malloc(n * sizeof(int));") != NULL && strstr(line, "memset(arr, 0,") == NULL) {
        strncpy(advice, "Инициализируйте выделенную память (например, memset) после malloc, если нужно.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0161(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (;;) break;") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без необходимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0162(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(strlen(s));") != NULL) {
        strncpy(advice, "При выделении памяти под строку учитывайте дополнительный байт под '\\0'.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0163(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i = 0; while(i < 10) { i--; }") != NULL) {
        strncpy(advice, "Проверьте, что счетчик цикла корректно изменяется, чтобы избежать бесконечного цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0164(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 10;") != NULL) {
        strncpy(advice, "Перед разыменованием указателя проверьте, что он не NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0165(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p; strcpy(p, \"text\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделяйте память перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0166(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i=0; i<n; i++)") != NULL && strstr(line, "i < n") == NULL) {
        strncpy(advice, "Убедитесь, что условие цикла корректно, чтобы избежать выхода за пределы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0167(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / 0;") != NULL) {
        strncpy(advice, "Избегайте деления на ноль — это вызывает неопределенное поведение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0168(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; free(p);") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после free для предотвращения висячих указателей.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0169(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL;") != NULL && strstr(line, "free(p);") != NULL) {
        strncpy(advice, "Безопасно вызывать free для NULL-указателя, но проверка не помешает.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0170(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = 1)") != NULL) {
        strncpy(advice, "Для сравнения используйте ==, а не =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0171(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x;") != NULL && strstr(line, "x = x + 1;") != NULL && strstr(line, "x = 0;") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0172(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "const int x = 10;") != NULL && strstr(line, "x = 5;") != NULL) {
        strncpy(advice, "Константные переменные нельзя изменять.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0173(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; printf(\"%f\", x);") != NULL) {
        strncpy(advice, "Используйте соответствующий спецификатор формата для типа переменной.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0174(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch(x) { case 1: }") != NULL && strstr(line, "break;") == NULL) {
        strncpy(advice, "Используйте break в case, чтобы избежать перехода к следующему case.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0175(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте память после malloc.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0176(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; p = realloc(p, 20);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0177(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b && c;") != NULL && strstr(line, "if (a)") == NULL) {
        strncpy(advice, "Проверяйте логические выражения с if для правильного поведения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0178(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets, она небезопасна. Используйте fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0179(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL;") != NULL && strstr(line, "strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделяйте память перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0180(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *arr = malloc(n * sizeof(int));") != NULL && strstr(line, "free(arr);") == NULL) {
        strncpy(advice, "Освобождайте память после использования malloc.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0181(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (x = 5)") != NULL) {
        strncpy(advice, "Используйте == для сравнения, а не =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0182(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0;") != NULL && strstr(line, "a = a + 1;") != NULL && strstr(line, "int a = 1;") == NULL) {
        strncpy(advice, "Инициализируйте переменную правильно, чтобы избежать неопределенного поведения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0183(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void func() { return 1; }") != NULL) {
        strncpy(advice, "Функции void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0184(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "*p = 10;") != NULL) {
        strncpy(advice, "Проверьте, что malloc не вернул NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0185(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 0;") != NULL) {
        strncpy(advice, "Индекс массива выходит за пределы. Используйте 0..4 для arr[5].", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0186(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL;") != NULL && strstr(line, "free(p);") != NULL) {
        strncpy(advice, "Вызов free для NULL безопасен, но проверка не помешает.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0187(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr;") != NULL && strstr(line, "ptr = &var;") == NULL) {
        strncpy(advice, "Инициализируйте указатели перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0188(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; while (x < 10) {") != NULL && strstr(line, "x++;") == NULL) {
        strncpy(advice, "Не забывайте увеличивать счетчик в цикле для предотвращения бесконечного цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0189(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL) {
        strncpy(advice, "Используйте ограничение длины в scanf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0190(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "strcpy(dest, src);") != NULL && strstr(line, "dest") == NULL) {
        strncpy(advice, "Проверьте, что dest и src корректно инициализированы и не NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0191(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "Используйте sizeof для корректного расчёта размера памяти при malloc.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0192(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; a = a + 1;") != NULL && strstr(line, "a = 0;") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием для избежания неопределённого поведения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0193(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void func() { return 10; }") != NULL) {
        strncpy(advice, "Функции с типом void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0194(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *s = NULL; strcat(s, \"text\");") != NULL) {
        strncpy(advice, "Выделяйте память для строк перед использованием strcat.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0195(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0196(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b)") != NULL) {
        strncpy(advice, "Для сравнения используйте оператор ==, а не =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0197(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0198(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / c;") != NULL && strstr(line, "c == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на ноль, чтобы избежать ошибки деления.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0199(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets, она небезопасна. Используйте fgets или getline.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0200(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x;") != NULL && strstr(line, "if (x > 0) x++;") != NULL) {
        strncpy(advice, "Убедитесь, что переменная x инициализирована перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}


int after_example_0201(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 10;") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием, чтобы избежать сегфолта.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0202(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "float f = 1.0/0.0;") != NULL) {
        strncpy(advice, "Избегайте деления на ноль, это вызывает неопределенное поведение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0203(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[10]; strcpy(str, \"This string is too long\");") != NULL) {
        strncpy(advice, "Не используйте strcpy без проверки размера буфера, используйте strncpy или snprintf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0204(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0205(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i; for(i=0; i<10; i++) { /* ... */ }") != NULL && strstr(line, "continue;") != NULL) {
        strncpy(advice, "Используйте continue осмотрительно, чтобы не усложнять чтение цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0206(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { int a = 0; }") != NULL && strstr(line, "return") != NULL) {
        strncpy(advice, "Функции void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0207(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x == 0) {") != NULL && strstr(line, "x = 1;") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0208(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[-1] = 10;") != NULL) {
        strncpy(advice, "Не используйте отрицательные индексы массива, это приводит к неопределённому поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0209(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(0);") != NULL) {
        strncpy(advice, "Не выделяйте 0 байт памяти, это может вернуть NULL или валидный указатель, поведение неочевидно.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0210(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); *p = 10;") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0211(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатели перед использованием, чтобы избежать краха программы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0212(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения ==, а не присваивания = в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0213(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL) {
        strncpy(advice, "Используйте спецификатор длины в scanf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0214(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1) { /* ... */ }") != NULL && strstr(line, "break;") == NULL) {
        strncpy(advice, "Добавьте условие выхода из бесконечного цикла, чтобы избежать зависания.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0215(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)*n);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать динамически выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0216(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 1; int b = 2; if (a = b)") != NULL) {
        strncpy(advice, "В условиях используйте оператор сравнения == вместо присваивания =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0217(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 10;") != NULL) {
        strncpy(advice, "Проверьте указатель на NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0218(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 1;") != NULL) {
        strncpy(advice, "Индексы массива должны быть в диапазоне от 0 до 9.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0219(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделяйте память под строки перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0220(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL, чтобы избежать утечки памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0221(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения == вместо присваивания = в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0222(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0223(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / c;") != NULL && strstr(line, "c == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на ноль, чтобы избежать деления на ноль.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0224(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets — она небезопасна, используйте fgets или getline.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0225(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x;") != NULL && strstr(line, "if (x > 0) x++;") != NULL) {
        strncpy(advice, "Убедитесь, что переменная x инициализирована перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0226(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p; *p = 10;") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием, чтобы избежать ошибки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0227(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "float f = 1.0/0.0;") != NULL) {
        strncpy(advice, "Избегайте деления на ноль, это приводит к неопределенному поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0228(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[10]; strcpy(str, \"Длинная строка\");") != NULL) {
        strncpy(advice, "Используйте strncpy или snprintf, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0229(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0230(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i; for(i=0; i<10; i++) { /* ... */ }") != NULL && strstr(line, "continue;") != NULL) {
        strncpy(advice, "Используйте continue аккуратно, чтобы не усложнять логику цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0231(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { int a = 0; }") != NULL && strstr(line, "return") != NULL) {
        strncpy(advice, "Функции void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0232(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x == 0) {") != NULL && strstr(line, "x = 1;") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0233(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[-1] = 10;") != NULL) {
        strncpy(advice, "Не используйте отрицательные индексы массива, это вызывает неопределённое поведение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0234(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(0);") != NULL) {
        strncpy(advice, "Не выделяйте 0 байт памяти, это может привести к неопределённому поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0235(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); *p = 10;") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0236(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатели перед использованием, чтобы избежать краха.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0237(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения == вместо присваивания = в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0238(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL) {
        strncpy(advice, "Используйте ограничение длины при чтении строк с помощью scanf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0239(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1) { /* ... */ }") != NULL && strstr(line, "break;") == NULL) {
        strncpy(advice, "Добавьте условие выхода из бесконечного цикла, чтобы избежать зависания.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0240(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)*n);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать динамически выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0241(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 1; int b = 2; if (a = b)") != NULL) {
        strncpy(advice, "В условиях используйте оператор сравнения == вместо присваивания =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0242(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 10;") != NULL) {
        strncpy(advice, "Проверяйте указатели на NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0243(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 1;") != NULL) {
        strncpy(advice, "Индексы массива должны быть в допустимом диапазоне.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0244(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделяйте память для строк перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0245(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL, чтобы избежать утечек памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0246(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения == в условии, а не присваивание =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0247(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0248(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / c;") != NULL && strstr(line, "c == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на ноль, чтобы избежать ошибки деления на ноль.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0249(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets — она небезопасна. Используйте fgets или getline.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0250(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x;") != NULL && strstr(line, "if (x > 0) x++;") != NULL) {
        strncpy(advice, "Убедитесь, что переменная x инициализирована перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0251(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием, чтобы избежать ошибки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0252(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "float f = 1.0/0.0;") != NULL) {
        strncpy(advice, "Деление на ноль приводит к неопределённому поведению, избегайте этого.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0253(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[10]; strcpy(str, \"Очень длинная строка\");") != NULL) {
        strncpy(advice, "Используйте strncpy или snprintf для защиты от переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0254(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Всегда проверяйте fopen на NULL перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0255(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for(int i=0; i<10; i++) { if(i == 5) continue; }") != NULL) {
        strncpy(advice, "Используйте continue аккуратно, чтобы не усложнять понимание цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0256(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { return 5; }") != NULL) {
        strncpy(advice, "Функция с типом void не должна возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0257(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x == 0) { /* ... */ }") != NULL && strstr(line, "x = 1;") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0258(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[-1] = 100;") != NULL) {
        strncpy(advice, "Индексы массива не должны быть отрицательными.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0259(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(0);") != NULL) {
        strncpy(advice, "Выделение 0 байт памяти может привести к неопределённому поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0260(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); *p = 10;") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте указатель после malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0261(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0262(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (x = 10)") != NULL) {
        strncpy(advice, "В условии используйте оператор сравнения ==, а не присваивания =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0263(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL) {
        strncpy(advice, "Ограничьте длину считываемой строки, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0264(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1) { }") != NULL && strstr(line, "break;") == NULL) {
        strncpy(advice, "Добавьте условие выхода из бесконечного цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0265(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)*n);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать динамически выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0266(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 1; if (a = 2)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения == в условии, а не присваивания =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0267(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 10;") != NULL) {
        strncpy(advice, "Проверяйте указатели на NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0268(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 1;") != NULL) {
        strncpy(advice, "Индекс массива должен быть меньше размера массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0269(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделяйте память под строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0270(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL, чтобы избежать утечек памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0271(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения ==, а не присваивание = в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0272(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0273(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / c;") != NULL && strstr(line, "c == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на ноль, чтобы избежать деления на ноль.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0274(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets, она небезопасна. Используйте fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0275(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x > 0) x++;") != NULL) {
        strncpy(advice, "Инициализируйте переменную перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0276(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0277(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "float f = 1.0/0.0;") != NULL) {
        strncpy(advice, "Деление на ноль приводит к неопределённому поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0278(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[10]; strcpy(str, \"Очень длинная строка\");") != NULL) {
        strncpy(advice, "Используйте strncpy или snprintf, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0279(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0280(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for(int i=0; i<10; i++) { if(i == 5) continue; }") != NULL) {
        strncpy(advice, "Используйте continue с осторожностью для читаемости кода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0281(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { return 5; }") != NULL) {
        strncpy(advice, "Функция с void не должна возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0282(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x == 0) { /* ... */ }") != NULL && strstr(line, "x = 1;") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0283(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[-1] = 100;") != NULL) {
        strncpy(advice, "Индексы массива не должны быть отрицательными.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0284(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(0);") != NULL) {
        strncpy(advice, "Выделение 0 байт может вызвать неопределённое поведение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0285(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); *p = 10;") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте указатель после malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0286(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0287(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (x = 10)") != NULL) {
        strncpy(advice, "В условии используйте оператор сравнения ==, а не присваивания =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0288(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL) {
        strncpy(advice, "Ограничьте длину считываемой строки, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0289(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1) { }") != NULL && strstr(line, "break;") == NULL) {
        strncpy(advice, "Добавьте условие выхода из бесконечного цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0290(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)*n);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать динамически выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0291(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 1; if (a = 2)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения == в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0292(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 10;") != NULL) {
        strncpy(advice, "Проверяйте указатели на NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0293(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 1;") != NULL) {
        strncpy(advice, "Индекс массива должен быть меньше размера массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0294(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделяйте память под строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0295(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0296(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения ==, а не присваивание =.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0297(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0298(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / c;") != NULL && strstr(line, "c == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на ноль.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0299(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets, используйте fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0300(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x > 0) x++;") != NULL) {
        strncpy(advice, "Инициализируйте переменную перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}
