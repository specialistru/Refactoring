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

int after_example_0301(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 0;") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Перед использованием указателя убедитесь, что он инициализирован.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0302(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделите память под строку перед копированием, чтобы избежать ошибок.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0303(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i = 0; i <= 10; i++) arr[i] = i;") != NULL) {
        strncpy(advice, "Индексация массива должна быть строго меньше его размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0304(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Не освобождайте память дважды — это приводит к неопределённому поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0305(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 10; if (x = 5) { }") != NULL) {
        strncpy(advice, "В условии используйте сравнение '==' вместо присваивания '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0306(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL && strstr(line, "%9s") == NULL) {
        strncpy(advice, "Ограничивайте ввод с помощью спецификатора длины, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0307(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { return 10; }") != NULL) {
        strncpy(advice, "Функции с типом void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0308(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr = malloc(sizeof(int));") != NULL && strstr(line, "if (ptr == NULL)") == NULL) {
        strncpy(advice, "Всегда проверяйте результат malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0309(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте возвращаемое значение realloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0310(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 10;") != NULL) {
        strncpy(advice, "Индексы массива должны быть меньше его размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0311(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0312(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Проверяйте указатели на NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0313(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); ptr = NULL; free(ptr);") != NULL) {
        strncpy(advice, "Не освобождайте память дважды.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0314(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / c;") != NULL && strstr(line, "c == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на ноль, чтобы избежать деления на ноль.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0315(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets(), используйте fgets() для безопасности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0316(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1) { }") != NULL && strstr(line, "break;") == NULL) {
        strncpy(advice, "Добавьте условие выхода из бесконечного цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0317(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)*n);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0318(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x > 0) x++;") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменную перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0319(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 10;") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "Перед использованием указателя убедитесь в его инициализации.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0320(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b = c;") != NULL) {
        strncpy(advice, "Используйте операторы присваивания с осторожностью, чтобы избежать ошибок.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0321(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"hello\");") != NULL) {
        strncpy(advice, "Выделяйте память под строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0322(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i = 0; i <= n; i++) arr[i] = i;") != NULL) {
        strncpy(advice, "Проверяйте, чтобы индексы не выходили за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0323(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; if (x = 1) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0324(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL && strstr(line, "%9s") == NULL) {
        strncpy(advice, "Ограничивайте ввод для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0325(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0326(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0327(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 1;") != NULL) {
        strncpy(advice, "Индекс массива должен быть меньше размера массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0328(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0329(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0330(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии вместо присваивания '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0331(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0332(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / c;") != NULL && strstr(line, "c == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на ноль.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0333(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets(), применяйте fgets() для безопасности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0334(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x > 0) x++;") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменную перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0335(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0336(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "float f = 1.0/0.0;") != NULL) {
        strncpy(advice, "Деление на ноль ведёт к неопределённому поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0337(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[10]; strcpy(str, \"Очень длинная строка\");") != NULL) {
        strncpy(advice, "Используйте strncpy или snprintf, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0338(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0339(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for(int i=0; i<10; i++) { if(i == 5) continue; }") != NULL) {
        strncpy(advice, "Используйте continue с осторожностью для поддержания читаемости кода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0340(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { return 5; }") != NULL) {
        strncpy(advice, "Функция с типом void не должна возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0341(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; if (a == 10) { }") != NULL && strstr(line, "a =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0342(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[10] = 1;") != NULL) {
        strncpy(advice, "Используйте индексы в пределах размера массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0343(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p; free(p);") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "После освобождения памяти установите указатель в NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0344(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; x = x + 1;") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменную перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0345(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = malloc(10); strcpy(str, \"text\");") != NULL && strstr(line, "if (str == NULL)") == NULL) {
        strncpy(advice, "Проверяйте выделение памяти на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0346(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); *p = 10; free(p); *p = 20;") != NULL) {
        strncpy(advice, "Не используйте указатели после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0347(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "После освобождения памяти установите указатель в NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0348(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; switch(x) { case 1: break; }") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Добавьте default в switch для обработки неожиданных значений.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0349(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; fgets(buf, 100, stdin);") != NULL) {
        strncpy(advice, "Указывайте правильный размер буфера в fgets, чтобы избежать переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0350(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 2147483647; x++;") != NULL) {
        strncpy(advice, "Проверяйте переполнение целочисленных типов при арифметических операциях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0351(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 10;") != NULL && strstr(line, "p = malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием, используйте malloc.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0352(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char s[10]; strcpy(s, \"This is a very long string\");") != NULL) {
        strncpy(advice, "Используйте strncpy или snprintf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0353(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "После освобождения памяти обязательно обнуляйте указатель.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0354(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; while(x < 10) { x = x; }") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без изменения счетчика.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0355(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; for (int i=0; i<=5; i++) arr[i] = 0;") != NULL) {
        strncpy(advice, "Используйте корректные границы массива: индексы от 0 до size-1.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0356(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "fclose(f);") == NULL) {
        strncpy(advice, "Не забывайте закрывать файлы вызовом fclose после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0357(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 10 / b;") != NULL && strstr(line, "b == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на 0 перед операцией деления.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0358(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте возвращаемое значение realloc на NULL, чтобы избежать утечек памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0359(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 2147483647; x++;") != NULL) {
        strncpy(advice, "Обрабатывайте возможное переполнение целочисленных переменных.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0360(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str; strcpy(str, \"text\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделяйте память под строку перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0361(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Инициализируйте указатели перед использованием, чтобы избежать неопределенного поведения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0362(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; if (a = 1) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условных выражениях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0363(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets(), используйте fgets() с ограничением размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0364(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char s[10]; sprintf(s, \"%s\", input);") != NULL) {
        strncpy(advice, "Используйте snprintf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0365(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; if (a == 10) { }") != NULL && strstr(line, "a =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0366(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать выделенную память вызовом free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0367(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); *p = 10; free(p); *p = 20;") != NULL) {
        strncpy(advice, "Не используйте указатели после вызова free (используйте NULL).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0368(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[10] = 1;") != NULL) {
        strncpy(advice, "Используйте индексы массива в пределах размера массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0369(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Перед копированием строки выделяйте память для неё.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0370(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr == NULL) { *ptr = 5; }") != NULL) {
        strncpy(advice, "Проверяйте указатели на NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0371(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x > 0) x++;") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменную перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0372(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0373(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 10; switch(x) { case 1: break; }") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Добавьте default в switch для обработки всех случаев.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0374(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; fgets(buf, 100, stdin);") != NULL) {
        strncpy(advice, "Указывайте корректный размер буфера в fgets для предотвращения переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0375(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { return 5; }") != NULL) {
        strncpy(advice, "Функции с типом void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0376(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i = 0; i <= n; i++) arr[i] = i;") != NULL) {
        strncpy(advice, "Проверяйте, чтобы индексы массива не выходили за его границы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0377(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте возвращаемое значение malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0378(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / c;") != NULL && strstr(line, "c == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на ноль перед делением.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0379(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"hello\");") != NULL) {
        strncpy(advice, "Выделяйте память под строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0380(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; if (x = 1) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0381(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL && strstr(line, "%9s") == NULL) {
        strncpy(advice, "Ограничивайте ввод длиной строки для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0382(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0383(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0384(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 1;") != NULL) {
        strncpy(advice, "Индекс массива должен быть меньше размера массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0385(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0386(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "p = realloc(p, new_size); free(p);") != NULL) {
        strncpy(advice, "Не освобождайте память сразу после realloc, если планируете использовать указатель.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0387(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; free(p);") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "После free обнуляйте указатель, чтобы избежать висячих указателей.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0388(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0389(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; switch(x) { case 1: break; }") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Добавьте default в switch для обработки всех вариантов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0390(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; fgets(buf, 100, stdin);") != NULL) {
        strncpy(advice, "Используйте корректный размер буфера в fgets для предотвращения переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0391(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { return 5; }") != NULL) {
        strncpy(advice, "Функции с типом void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0392(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i = 0; i <= n; i++) arr[i] = i;") != NULL) {
        strncpy(advice, "Проверяйте, чтобы индексы массива не выходили за его границы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0393(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте возвращаемое значение malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0394(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = b / c;") != NULL && strstr(line, "c == 0") == NULL) {
        strncpy(advice, "Проверяйте делитель на ноль перед делением.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0395(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"hello\");") != NULL) {
        strncpy(advice, "Выделяйте память под строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0396(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; if (x = 1) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0397(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL && strstr(line, "%9s") == NULL) {
        strncpy(advice, "Ограничивайте ввод длиной строки для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0398(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0399(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0400(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 1;") != NULL) {
        strncpy(advice, "Индекс массива должен быть меньше размера массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0401(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0402(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "p = realloc(p, new_size); free(p);") != NULL) {
        strncpy(advice, "Не освобождайте память сразу после realloc, если планируете использовать указатель.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0403(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; free(p);") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "После free обнуляйте указатель, чтобы избежать висячих указателей.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0404(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0405(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; switch(x) { case 1: break; }") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Добавьте default в switch для обработки всех вариантов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0406(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; fgets(buf, 100, stdin);") != NULL) {
        strncpy(advice, "Используйте корректный размер буфера в fgets для предотвращения переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0407(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0408(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0409(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделяйте память перед копированием строки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0410(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x > 0) x++;") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменную перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0411(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0412(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; if (a == 10) { }") != NULL && strstr(line, "a =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0413(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets(), применяйте fgets() с ограничением длины.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0414(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; for (int i=0; i<=5; i++) arr[i] = 0;") != NULL) {
        strncpy(advice, "Используйте корректные границы массива: 0 <= i < size.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0415(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 2147483647; x++;") != NULL) {
        strncpy(advice, "Обрабатывайте переполнение целочисленных переменных.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0416(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { int x; }") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0417(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL && strstr(line, "p = malloc") == NULL) {
        strncpy(advice, "Выделяйте память под указатели перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0418(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0419(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while(a < 10) { }") != NULL && strstr(line, "a++;") == NULL) {
        strncpy(advice, "Избегайте бесконечных циклов, изменяя управляющую переменную.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0420(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10); free(p); free(p);") != NULL) {
        strncpy(advice, "Не освобождайте память дважды.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0421(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10); strcpy(p, \"string\");") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0422(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 10 / 0;") != NULL) {
        strncpy(advice, "Избегайте деления на ноль.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0423(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p; strcpy(p, \"text\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделите память перед копированием строки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0424(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Не разыменовывайте NULL указатели.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0425(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; a++;") != NULL && strstr(line, "a =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0426(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL && strstr(line, "%9s") == NULL) {
        strncpy(advice, "Ограничивайте ввод длиной строки для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0427(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 10; switch(a) { case 1: break; }") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Добавьте default в switch для обработки всех вариантов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0428(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10); free(p); free(p);") != NULL) {
        strncpy(advice, "Избегайте двойного освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0429(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; free(p);") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "После free обнуляйте указатель.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0430(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; fgets(buf, 100, stdin);") != NULL) {
        strncpy(advice, "Используйте правильный размер буфера в fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}


int after_example_0431(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0432(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0433(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделяйте память перед копированием строки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0434(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x > 0) x++;") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменную перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0435(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0436(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; if (a == 10) { }") != NULL && strstr(line, "a =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0437(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets(), применяйте fgets() с ограничением длины.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0438(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; for (int i=0; i<=5; i++) arr[i] = 0;") != NULL) {
        strncpy(advice, "Используйте корректные границы массива: 0 <= i < size.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0439(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 2147483647; x++;") != NULL) {
        strncpy(advice, "Обрабатывайте переполнение целочисленных переменных.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0440(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { int x; }") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0441(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL && strstr(line, "p = malloc") == NULL) {
        strncpy(advice, "Выделяйте память под указатели перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0442(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0443(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while(a < 10) { }") != NULL && strstr(line, "a++;") == NULL) {
        strncpy(advice, "Избегайте бесконечных циклов, изменяя управляющую переменную.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0444(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10); free(p); free(p);") != NULL) {
        strncpy(advice, "Не освобождайте память дважды.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0445(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10); strcpy(p, \"string\");") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0446(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 10 / 0;") != NULL) {
        strncpy(advice, "Избегайте деления на ноль.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0447(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p; strcpy(p, \"text\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделите память перед копированием строки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0448(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Не разыменовывайте NULL указатели.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0449(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; a++;") != NULL && strstr(line, "a =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0450(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL && strstr(line, "%9s") == NULL) {
        strncpy(advice, "Ограничивайте ввод длиной строки для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0451(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *arr = malloc(sizeof(int) * 10);") != NULL && strstr(line, "if (arr == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0452(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i = 0; i <= 10; i++)") != NULL && strstr(line, "array[i]") != NULL) {
        strncpy(advice, "Используйте корректные границы цикла (i < size), чтобы избежать выхода за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0453(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr; free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти, чтобы избежать висячих указателей.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0454(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; if (x = 1)") != NULL) {
        strncpy(advice, "Используйте '==' для сравнения, '=' — это присваивание.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0455(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char s[10]; scanf(\"%s\", s);") != NULL && strstr(line, "%9s") == NULL) {
        strncpy(advice, "Ограничивайте ввод длиной для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0456(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = malloc(10); strcpy(str, \"text\");") != NULL && strstr(line, "if (str == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0457(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL && strstr(line, "p = malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0458(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { int x; }") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте локальные переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0459(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатели после free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0460(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 10 / 0;") != NULL) {
        strncpy(advice, "Избегайте деления на ноль.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0461(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p; strcpy(p, \"text\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделяйте память перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0462(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Не разыменовывайте NULL указатели.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0463(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; a++;") != NULL && strstr(line, "a =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0464(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL && strstr(line, "%9s") == NULL) {
        strncpy(advice, "Ограничьте ввод в scanf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0465(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch (x) { case 1: break; }") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Добавьте default в switch для обработки всех случаев.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0466(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10); free(p); free(p);") != NULL) {
        strncpy(advice, "Избегайте двойного освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0467(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; free(p);") != NULL && strstr(line, "p = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатели после free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0468(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; fgets(buf, 100, stdin);") != NULL) {
        strncpy(advice, "Используйте корректный размер буфера при вызове fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0469(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0470(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0471(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"text\");") != NULL) {
        strncpy(advice, "Выделяйте память перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0472(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x > 0) x++;") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0473(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Инициализируйте указатели перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0474(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; if (a == 10) { }") != NULL && strstr(line, "a =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0475(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Не используйте gets(), используйте fgets() с ограничением размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0476(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; for (int i=0; i<=5; i++) arr[i] = 0;") != NULL) {
        strncpy(advice, "Используйте правильные границы цикла для массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0477(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 2147483647; x++;") != NULL) {
        strncpy(advice, "Обрабатывайте переполнение целочисленных типов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0478(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { int x; }") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0479(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL && strstr(line, "p = malloc") == NULL) {
        strncpy(advice, "Выделяйте память под указатели перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0480(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0481(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr = malloc(0);") != NULL) {
        strncpy(advice, "Не выделяйте память размером 0 — это неопределённое поведение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0482(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; memset(arr, 1, sizeof(arr));") != NULL) {
        strncpy(advice, "Для заполнения массива целыми значениями используйте цикл, memset заполняет байты.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0483(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char s[10]; strcpy(s, \"very long string that overflows\");") != NULL) {
        strncpy(advice, "Избегайте переполнения буфера, используйте strncpy или snprintf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0484(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 1; if (x = 2)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо присваивания '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0485(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; switch(x) { case 1: ... }") != NULL && strstr(line, "default:") == NULL) {
        strncpy(advice, "Добавьте ветку default в оператор switch.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0486(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr; free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Избегайте двойного освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0487(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f; fscanf(f, \"%s\", buf);") != NULL && strstr(line, "ferror(f)") == NULL) {
        strncpy(advice, "Проверяйте ошибки при работе с файлами.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0488(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 42;") != NULL) {
        strncpy(advice, "Не разыменовывайте NULL указатели.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0489(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str; strcpy(str, \"text\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделяйте память перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0490(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; x = x + 1;") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

// Продолжение ниже
int after_example_0491(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; fgets(buf, 100, stdin);") != NULL) {
        strncpy(advice, "Используйте корректный размер буфера в fgets для предотвращения переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0492(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char s[10]; scanf(\"%s\", s);") != NULL && strstr(line, "%9s") == NULL) {
        strncpy(advice, "Ограничьте длину ввода в scanf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0493(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr; free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0494(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0495(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = realloc(p, new_size);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат realloc перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0496(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; if (x = 1)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0497(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str; strcpy(str, \"text\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Перед использованием strcpy выделяйте память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0498(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char s[10]; gets(s);") != NULL) {
        strncpy(advice, "Не используйте gets(), она небезопасна. Используйте fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0499(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++) arr[i]=0;") != NULL) {
        strncpy(advice, "Используйте корректный цикл: i < размер массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0500(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL && strstr(line, "p = malloc") == NULL) {
        strncpy(advice, "Выделяйте память под указатель перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0501(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { int x; return x; }") != NULL) {
        strncpy(advice, "Функция с void должна ничего не возвращать.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0502(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr) free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Избегайте двойного освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0503(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[5]; strcpy(buf, \"123456\");") != NULL) {
        strncpy(advice, "Буфер недостаточного размера для строки — возможное переполнение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0504(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 1; if (a = 0)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0505(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for(int i=0; i<=n; i++)") != NULL) {
        strncpy(advice, "Проверьте границы цикла — обычно i < n, а не <= n.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0506(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "malloc(sizeof(int));") != NULL && strstr(line, "if (ptr == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0507(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p; strcpy(p, \"text\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Перед использованием strcpy выделяйте память для строки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0508(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char s[10]; gets(s);") != NULL) {
        strncpy(advice, "Функция gets небезопасна — используйте fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0509(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатели перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0510(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while(a < 10) { a--; }") != NULL) {
        strncpy(advice, "Проверьте условия выхода из цикла, чтобы избежать бесконечных циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0511(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr = malloc(10); free(ptr);") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0512(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 1)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0513(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *arr = malloc(n);") != NULL) {
        strncpy(advice, "При выделении памяти для массива учитывайте размер типа: malloc(n * sizeof(int)).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0514(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *s = malloc(10); strcpy(s, \"This is a very long string that does not fit\");") != NULL) {
        strncpy(advice, "Убедитесь, что выделенной памяти хватает для копируемой строки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0515(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Индексация массива начинается с 0, поэтому последний индекс a[9].", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0516(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; fgets(buf, 100, stdin);") != NULL) {
        strncpy(advice, "Используйте корректный размер буфера в fgets для предотвращения переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0517(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Не разыменовывайте NULL указатели.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0518(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; x++; return x;") != NULL && strstr(line, "x =") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0519(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); *p = 42;") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0520(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if (x = 5) { ... }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0521(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char s[10]; strcpy(s, \"string that is too long\");") != NULL) {
        strncpy(advice, "Используйте strncpy или проверяйте длину строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0522(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *arr = malloc(n);") != NULL) {
        strncpy(advice, "Используйте malloc(n * sizeof(*arr)) для выделения памяти под массив.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0523(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++) arr[i] = 0;") != NULL) {
        strncpy(advice, "Индекс массива выходит за границы, используйте i < 10.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0524(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p); free(p);") != NULL) {
        strncpy(advice, "Избегайте двойного освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0525(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; free(p);") != NULL) {
        strncpy(advice, "Освобождайте память только, если указатель не NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0526(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте успешное открытие файла перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0527(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; while(1) { x--; }") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без условия выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0528(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); if(p) *p = 0;") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0529(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"literal\"; str[0] = 'L';") != NULL) {
        strncpy(advice, "Строковые литералы неизменяемы — используйте массив char для изменения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0530(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; int *p = &a[10];") != NULL) {
        strncpy(advice, "Индекс за пределами массива, последний элемент a[9].", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0531(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if(x = 3)") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0532(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; gets(buffer);") != NULL) {
        strncpy(advice, "Функция gets опасна — замените на fgets для безопасного чтения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0533(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "Используйте malloc с учетом размера типа: malloc(10 * sizeof(int)).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0534(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 10;") != NULL) {
        strncpy(advice, "Индекс массива выходит за границы, используйте индексы 0-4.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0535(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Избегайте двойного освобождения памяти, это приводит к ошибкам.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0536(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 10;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Указатель не инициализирован перед использованием, выделите память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0537(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы неизменяемы, используйте массив char для изменения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0538(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x=0) { ... }") != NULL) {
        strncpy(advice, "Используйте оператор '==' для сравнения, '=' — присваивание.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0539(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Передавайте в fgets правильный размер буфера, чтобы избежать переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0540(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте успешное открытие файла перед дальнейшей работой с ним.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0541(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; while(1) { }") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без условий выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0542(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0543(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Цикл выходит за границы массива, используйте i < 10.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0544(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; free(p);") != NULL) {
        strncpy(advice, "Освобождайте память только при не NULL указателе.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0545(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; if (a = 1) { ... }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' для условий, а не присваивания '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0546(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "Проверяйте размер буфера перед копированием, чтобы избежать переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0547(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед использованием, выделите память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0548(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Индекс массива выходит за пределы, последний индекс - 9.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0549(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Избегайте двойного освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0550(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Изменение строкового литерала запрещено — используйте массив char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0551(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int main() { int a; return; }") != NULL) {
        strncpy(advice, "Функция main должна возвращать int, используйте 'return 0;'.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0552(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { int x; } x = 5;") != NULL) {
        strncpy(advice, "Переменные объявляйте в нужной области видимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0553(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 10;") != NULL) {
        strncpy(advice, "Не разыменовывайте NULL указатель — это приводит к сбою.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0554(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char s[5]; strcpy(s, \"123456\");") != NULL) {
        strncpy(advice, "Избегайте переполнения буфера при копировании строк.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0555(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i = 0; do { ... } while(i < 0);") != NULL) {
        strncpy(advice, "Проверьте условие в цикле do-while, чтобы избежать бесконечных циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0556(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p; strcpy(p, \"text\");") != NULL) {
        strncpy(advice, "Инициализируйте указатель перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0557(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *arr = malloc(10);") != NULL && strstr(line, "sizeof") == NULL) {
        strncpy(advice, "Всегда учитывайте размер типа при выделении памяти malloc.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0558(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for(int i=0; i<=10; i++) arr[i] = 0;") != NULL) {
        strncpy(advice, "Используйте условие i < 10 для обхода массива длиной 10.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0559(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(ptr != NULL) free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Двойное освобождение памяти вызывает ошибки — избегайте этого.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0560(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"Hello\"; str[0] = 'h';") != NULL) {
        strncpy(advice, "Строковые литералы нельзя изменять — используйте массив char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0561(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10 * sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную динамическую память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0562(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Используйте i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0563(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; free(p);") != NULL) {
        strncpy(advice, "Освобождайте память только если указатель не NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0564(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) { ... }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях, а не '=' присваивания.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0565(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "Проверяйте длину строки при копировании, чтобы избежать переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0566(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделите память для указателя перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0567(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Индекс выходит за пределы массива, последний индекс — 9.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0568(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(ptr != NULL) free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Двойное освобождение памяти недопустимо.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0569(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Изменять строковые литералы нельзя — используйте массив char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0570(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) { }") != NULL) {
        strncpy(advice, "Для проверки используйте '==' вместо '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0571(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Проверьте, что размер в fgets не превышает размер буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0572(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0573(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; while(1) { }") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без условия выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0574(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забудьте освободить динамически выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0575(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Используйте i < 10 для корректной работы с массивом.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0576(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; free(p);") != NULL) {
        strncpy(advice, "Проверяйте, что указатель не NULL перед вызовом free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0577(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) { ... }") != NULL) {
        strncpy(advice, "В условиях используйте оператор сравнения '==', а не '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0578(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "Проверяйте размер буфера для безопасного копирования строк.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0579(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделяйте память перед использованием указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0580(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Индекс выходит за границы массива, последний индекс - 9.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0581(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(ptr != NULL) free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Двойное освобождение памяти приводит к ошибкам — избегайте этого.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0582(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы неизменяемы — используйте массив char для модификации.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0583(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо присваивания '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0584(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Размер буфера в fgets не должен превышать выделенный размер массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0585(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen на NULL перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0586(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; while(1) { }") != NULL) {
        strncpy(advice, "Бесконечные циклы без условия выхода могут привести к зависанию.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0587(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0588(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Для обхода массива используйте условие i < 10.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0589(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; free(p);") != NULL) {
        strncpy(advice, "Перед вызовом free убедитесь, что указатель не NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0590(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) { ... }") != NULL) {
        strncpy(advice, "Используйте оператор '==' для сравнения в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0591(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "Избегайте переполнения буфера при копировании строк.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0592(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделяйте память перед использованием указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0593(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Индекс выходит за границы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0594(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(ptr != NULL) free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Не освобождайте память дважды.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0595(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Нельзя изменять строковые литералы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0596(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) { }") != NULL) {
        strncpy(advice, "Используйте '==' для сравнения, а не '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0597(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Проверьте размер буфера при использовании fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0598(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте fopen на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0599(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; while(1) { }") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без условий выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0600(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную динамическую память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0601(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Используйте условие i < 10 для обхода массива из 10 элементов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0602(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; free(p);") != NULL) {
        strncpy(advice, "free(NULL) безопасен, но лучше проверять указатель перед освобождением.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0603(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 5; if(a = 10) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0604(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[5]; strcpy(buf, \"123456\");") != NULL) {
        strncpy(advice, "Избегайте переполнения буфера при использовании strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0605(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 42;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделяйте память динамически перед использованием указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0606(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Индекс массива выходит за пределы (максимальный индекс 9).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0607(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); free(p); free(p);") != NULL) {
        strncpy(advice, "Не вызывайте free дважды для одного указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0608(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы в памяти только для чтения, нельзя их изменять.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0609(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) { }") != NULL) {
        strncpy(advice, "В условии используйте '==' для сравнения, а не '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0610(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Размер буфера и количество считываемых символов в fgets должны совпадать.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0611(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте fopen на NULL, чтобы избежать сбоев при открытии файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0612(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; while(1) { }") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без условия выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0613(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте динамическую память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0614(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Используйте i < 10 для обхода массива из 10 элементов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0615(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; free(p);") != NULL) {
        strncpy(advice, "free(NULL) безопасен, но лучше проверять указатель перед вызовом free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0616(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) { ... }") != NULL) {
        strncpy(advice, "Используйте '==' для сравнения, а не '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0617(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "Избегайте переполнения буфера при использовании strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0618(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделяйте память перед использованием указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0619(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Индекс выходит за границы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0620(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(ptr != NULL) free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Не освобождайте память дважды.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0621(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Нельзя изменять строковые литералы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0622(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) { }") != NULL) {
        strncpy(advice, "Используйте '==' для сравнения, а не '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0623(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Проверьте размер буфера при использовании fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0624(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if (f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте fopen на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0625(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; while(1) { }") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без условий выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0626(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте динамическую память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0627(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Используйте i < 10 для обхода массива из 10 элементов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0628(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; free(p);") != NULL) {
        strncpy(advice, "free(NULL) безопасен, но лучше проверять указатель перед вызовом free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0629(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) { ... }") != NULL) {
        strncpy(advice, "Используйте '==' для сравнения, а не '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0630(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "Избегайте переполнения буфера при использовании strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0631(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Выделяйте память для указателя перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0632(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Индекс массива выходит за пределы (максимальный индекс 9).", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0633(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Двойной вызов free для одного указателя запрещён.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0634(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы нельзя изменять — используйте массив char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0635(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) {") != NULL) {
        strncpy(advice, "В условии используйте оператор сравнения '==' вместо присваивания '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0636(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Количество символов в fgets не должно превышать размер буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0637(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте возвращаемое значение fopen на NULL для безопасного открытия файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0638(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; while(1) {") != NULL && strstr(line, "break;") == NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без условий выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0639(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "После выделения памяти обязательно освобождайте её вызовом free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0640(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Цикл должен идти до i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0641(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; free(p);") != NULL) {
        strncpy(advice, "free(NULL) безопасен, но лучше проверить указатель перед вызовом free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0642(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0643(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "strcpy может переполнить буфер — используйте strncpy или snprintf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0644(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Неинициализированный указатель — выделите память или укажите корректный адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0645(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Выход за границы массива может привести к ошибкам и повреждению данных.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0646(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Вызывайте free только один раз для каждого выделенного блока памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0647(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Изменение строкового литерала — неопределённое поведение, используйте массив.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0648(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) {") != NULL) {
        strncpy(advice, "В условии надо использовать '==' для сравнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0649(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Передайте в fgets корректный размер буфера, чтобы избежать переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0650(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen на NULL перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0651(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Обязательно освобождайте выделенную память вызовом free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0652(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Цикл должен использовать условие i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0653(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии вместо '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0654(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "Используйте strncpy или snprintf, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0655(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Указатель не инициализирован — выделите память или укажите корректный адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0656(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Выход за границы массива приводит к неопределённому поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0657(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Не вызывайте free для одного и того же указателя более одного раза.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0658(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы нельзя изменять — используйте массивы char для модификации.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0659(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) {") != NULL) {
        strncpy(advice, "В условии используйте оператор сравнения '==', а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0660(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Размер, передаваемый в fgets, должен не превышать размер буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0661(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen на NULL для безопасной работы с файлами.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0662(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забывайте освобождать выделенную память функцией free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0663(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Используйте условие i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0664(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) {") != NULL) {
        strncpy(advice, "В условии используйте '==' для сравнения, а не '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0665(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "Используйте strncpy или snprintf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0666(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед использованием, выделите память или укажите адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0667(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Выход за границы массива — ошибка, индексы от 0 до 9.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0668(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Вызывайте free для указателя только один раз.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0669(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы неизменяемы, для модификации используйте массивы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0670(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0671(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Размер в fgets должен соответствовать размеру буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0672(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0673(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забудьте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0674(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Цикл должен идти до i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0675(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0676(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "strcpy опасен — используйте strncpy или snprintf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0677(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Неинициализированный указатель, выделите память или укажите корректный адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0678(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Выход за пределы массива — ошибка.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0679(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Не вызывайте free повторно для одного указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0680(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы нельзя изменять — используйте массивы char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0681(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0682(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Размер в fgets должен соответствовать размеру буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0683(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0684(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забудьте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0685(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Цикл должен идти до i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0686(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0687(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "strcpy опасен — используйте strncpy или snprintf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0688(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Неинициализированный указатель, выделите память или укажите корректный адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0689(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Выход за пределы массива — ошибка.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0690(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Не вызывайте free повторно для одного указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0691(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы нельзя изменять — используйте массивы char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0692(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0693(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Размер в fgets должен соответствовать размеру буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0694(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0695(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забудьте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0696(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Цикл должен идти до i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0697(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0698(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "strcpy опасен — используйте strncpy или snprintf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0699(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Неинициализированный указатель, выделите память или укажите корректный адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0700(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Выход за пределы массива — ошибка.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0701(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Не вызывайте free повторно для одного указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0702(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы нельзя изменять — используйте массивы char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0703(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0704(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Размер в fgets должен соответствовать размеру буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0705(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0706(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забудьте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0707(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Цикл должен идти до i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0708(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0709(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "strcpy опасен — используйте strncpy или snprintf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0710(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Неинициализированный указатель, выделите память или укажите корректный адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0711(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Выход за пределы массива — ошибка.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0712(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Не вызывайте free повторно для одного указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0713(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы нельзя изменять — используйте массивы char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0714(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0715(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Размер в fgets должен соответствовать размеру буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0716(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0717(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забудьте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0718(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Цикл должен идти до i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0719(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0720(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"1234567890123456\");") != NULL) {
        strncpy(advice, "strcpy опасен — используйте strncpy или snprintf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0721(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Неинициализированный указатель, выделите память или укажите корректный адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0722(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[10]; a[10] = 0;") != NULL) {
        strncpy(advice, "Выход за пределы массива — ошибка.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0723(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Не вызывайте free повторно для одного указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0724(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы нельзя изменять — используйте массивы char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0725(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0726(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; fgets(buffer, 100, stdin);") != NULL) {
        strncpy(advice, "Размер в fgets должен соответствовать размеру буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0727(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\");") != NULL && strstr(line, "if(f == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат fopen перед использованием файла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0728(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Не забудьте освобождать выделенную память.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0729(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; for(int i=0; i<=10; i++)") != NULL) {
        strncpy(advice, "Цикл должен идти до i < 10, чтобы не выйти за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0730(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(a = 1) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0731(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "gets(") != NULL) {
        strncpy(advice, "gets небезопасна — используйте fgets с ограничением размера буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0732(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr = NULL; *ptr = 5;") != NULL) {
        strncpy(advice, "Разыменовывание NULL указателя — ошибка.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0733(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch(x) { default: break; case 1:") != NULL) {
        strncpy(advice, "Расположите case перед default для читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0734(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 10; int b = 0; int c = a/b;") != NULL) {
        strncpy(advice, "Проверяйте делитель на ноль, чтобы избежать ошибки деления.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0735(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(ptr != NULL);") != NULL) {
        strncpy(advice, "Не ставьте точку с запятой сразу после условия if.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0736(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(10); strcpy(p, \"123456789012345\");") != NULL) {
        strncpy(advice, "Выделенной памяти недостаточно — выделяйте с запасом и проверяйте границы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0737(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "При выделении памяти используйте sizeof с типом для корректного размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0738(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1) {}") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без условий выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0739(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "goto error;") != NULL && strstr(line, "error:") == NULL) {
        strncpy(advice, "Использование goto без метки — ошибка.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0740(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; if(a == 0) return 1; else return 0;") != NULL) {
        strncpy(advice, "Упростите if-else до return a == 0;", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0741(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; memset(arr, 0, sizeof(arr)+1);") != NULL) {
        strncpy(advice, "Убедитесь, что memset не выходит за пределы массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0742(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "const char *s = NULL; strlen(s);") != NULL) {
        strncpy(advice, "Проверяйте указатели на NULL перед вызовом strlen.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0743(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "printf(\"%d\", NULL);") != NULL) {
        strncpy(advice, "NULL не подходит для %d — используйте корректные значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0744(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if(x > 3) return; x = 10;") != NULL) {
        strncpy(advice, "Код после return не выполняется — переместите его выше.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0745(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i; for(i = 0; i < 10; i++);") != NULL) {
        strncpy(advice, "Избегайте пустых тел циклов с точкой с запятой.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0746(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = malloc(sizeof(char) * 10);") != NULL && strstr(line, "p == NULL") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0747(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "struct { int x; } s; s.x = 5;") != NULL && strstr(line, "typedef") == NULL) {
        strncpy(advice, "Используйте typedef для улучшения читаемости структур.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0748(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *s = malloc(10); free(s); s[0] = 'a';") != NULL) {
        strncpy(advice, "Не обращайтесь к памяти после её освобождения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0749(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(x = 0) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо присваивания в условии.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0750(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 0;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Указатель не инициализирован — выделите память или назначьте адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0751(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "strcpy(dest, src);") != NULL && strstr(line, "dest") != NULL) {
        strncpy(advice, "Используйте strncpy для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0752(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "sprintf(") != NULL) {
        strncpy(advice, "Используйте snprintf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0753(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; while(x = func())") != NULL) {
        strncpy(advice, "В условии цикла используйте сравнение '==' или проверяйте возвращаемое значение корректно.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0754(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Функция gets небезопасна, замените на fgets с размером буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0755(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Двойной вызов free — ошибка, избегайте освобождения памяти дважды.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0756(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; *p = 'a';") != NULL) {
        strncpy(advice, "Доступ по NULL указателю приведёт к аварийному завершению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0757(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 5 / 0;") != NULL) {
        strncpy(advice, "Деление на ноль приводит к неопределённому поведению — исправьте выражение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0758(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i = 0; i < n; i++) { /* no break */ }") != NULL) {
        strncpy(advice, "Убедитесь, что цикл не зацикливается без условий выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0759(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 10;") != NULL) {
        strncpy(advice, "Выход за границы массива приводит к неопределённому поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0760(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (x = 1) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0761(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"hello\"; str[0] = 'H';") != NULL) {
        strncpy(advice, "Строковые литералы неизменяемы — используйте массив char для изменений.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0762(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "if(p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0763(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void func() { return 5; }") != NULL) {
        strncpy(advice, "Функции void не должны возвращать значение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0764(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 10;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Используйте инициализацию указателя перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0765(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 1 / y;") != NULL && strstr(line, "y") != NULL) {
        strncpy(advice, "Проверяйте делитель на ноль перед операцией деления.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0766(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr; strcpy(ptr, \"test\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Убедитесь, что указатель инициализирован перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0767(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; gets(buffer);") != NULL) {
        strncpy(advice, "Избегайте использования gets, используйте fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0768(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (i = 0; i < 10; i++) { }") != NULL && strstr(line, "i") == NULL) {
        strncpy(advice, "Объявляйте переменные цикла перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0769(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 10; if (x > 0) return; x = 20;") != NULL) {
        strncpy(advice, "Код после return недостижим — перепишите логику.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0770(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10); free(p); *p = 5;") != NULL) {
        strncpy(advice, "Не обращайтесь к памяти после вызова free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0771(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = \"string\"; p[0] = 'S';") != NULL) {
        strncpy(advice, "Изменение строкового литерала вызывает неопределённое поведение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0772(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; if (x = 0) { }") != NULL) {
        strncpy(advice, "Используйте сравнение '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0773(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 0;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Неинициализированный указатель — выделите память или укажите адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0774(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; strcpy(buf, \"123456789012345\");") != NULL) {
        strncpy(advice, "Переполнение буфера — используйте strncpy с размером буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0775(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; printf(\"%d\", a);") != NULL) {
        strncpy(advice, "Переменная не инициализирована перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0776(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL);") != NULL) {
        strncpy(advice, "Не ставьте точку с запятой после условия if.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0777(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a[5]; a[5] = 10;") != NULL) {
        strncpy(advice, "Выход за пределы массива приводит к ошибкам.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0778(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { return 1; }") != NULL) {
        strncpy(advice, "Функция с void не должна возвращать значение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0779(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "При malloc используйте sizeof для корректного размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0780(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b) {") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условии, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0781(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr; strcpy(ptr, \"text\");") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Указатель не инициализирован перед использованием strcpy.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0782(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i=0; i<10; i++) { }") != NULL && strstr(line, "int i") == NULL) {
        strncpy(advice, "Объявляйте переменные цикла явно в начале блока или в объявлении.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0783(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p=10;") != NULL && strstr(line, "malloc") == NULL) {
        strncpy(advice, "Разыменование неинициализированного указателя опасно.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0784(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL);") != NULL) {
        strncpy(advice, "Избегайте пустого тела после условия if из-за лишней точки с запятой.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0785(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Функция gets устарела и небезопасна, используйте fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0786(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; printf(\"%d\", a);") != NULL) {
        strncpy(advice, "Используйте инициализированные переменные перед выводом.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0787(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 1;") != NULL) {
        strncpy(advice, "Обращение за пределы массива опасно, индексируйте от 0 до size-1.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0788(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void f() { return 1; }") != NULL) {
        strncpy(advice, "Функции с типом void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0789(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof") == NULL) {
        strncpy(advice, "Используйте sizeof при выделении памяти malloc для корректного размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0790(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b) {") != NULL) {
        strncpy(advice, "Ошибка присваивания в условии if — используйте сравнение '==' вместо '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0791(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch (x) { default: break; case 1: ... }") != NULL && strstr(line, "default") != NULL) {
        strncpy(advice, "Расположите default последним в switch для лучшей читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0792(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; if (x == 0) x = 1; else x = 1;") != NULL) {
        strncpy(advice, "Условие всегда ведет к одинаковому результату — перепишите логику.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0793(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strlen(str);") != NULL) {
        strncpy(advice, "Проверяйте указатели на NULL перед использованием строковых функций.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0794(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *arr = malloc(sizeof(int) * n); free(arr); arr[0] = 1;") != NULL) {
        strncpy(advice, "Не используйте память после вызова free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0795(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a && b || c && d)") != NULL) {
        strncpy(advice, "Используйте скобки для ясности логических выражений.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0796(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; x = x + 1;") != NULL && strstr(line, "x") != NULL) {
        strncpy(advice, "Инициализируйте переменную перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0797(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; scanf(\"%s\", buf);") != NULL) {
        strncpy(advice, "Используйте ограничение длины при чтении строк с помощью scanf.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0798(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Разыменование NULL указателя вызывает ошибку выполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0799(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; if (a == 0) { ... }") != NULL && strstr(line, "a") == NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0800(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10 * sizeof(int));") != NULL && strstr(line, "free(p); p = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти для предотвращения висячих указателей.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0801(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "sprintf(") != NULL && strstr(line, "snprintf(") == NULL) {
        strncpy(advice, "Используйте snprintf вместо sprintf для предотвращения переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0802(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "NULL == ptr") != NULL) {
        strncpy(advice, "Рекомендуется писать ptr == NULL для улучшения читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0803(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "typedef struct { int a; } MyStruct; MyStruct s;") != NULL) {
        strncpy(advice, "Используйте именованные структуры для улучшения читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0804(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i = 0; while (i < 10) { if (i == 5) break; i++; }") != NULL) {
        strncpy(advice, "Избегайте использования break для управления потоком в циклах, используйте условия.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0805(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "goto") != NULL) {
        strncpy(advice, "Избегайте использования goto для улучшения читаемости и поддерживаемости кода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0806(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "strcpy(dest, src);") != NULL && strstr(line, "dest") != NULL && strstr(line, "src") != NULL) {
        strncpy(advice, "Используйте strncpy или memcpy с учетом размера буфера для предотвращения переполнения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0807(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr; *ptr = 'a';") != NULL) {
        strncpy(advice, "Указатель не инициализирован — выделите память или присвойте адрес.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0808(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 5; a = a++;") != NULL) {
        strncpy(advice, "Побочные эффекты post-increment в присваивании могут приводить к неопределенному поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0809(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a, b; a = b = 0;") != NULL) {
        strncpy(advice, "Инициализируйте каждую переменную отдельно для улучшения читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0810(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; if(p) *p = 10;") != NULL) {
        strncpy(advice, "Проверяйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0811(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char arr[10]; arr[10] = 'a';") != NULL) {
        strncpy(advice, "Индексация массива за пределами размера приводит к неопределённому поведению.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0812(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; if(x = 0) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях if.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0813(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "return;") != NULL && strstr(line, "int func()") != NULL) {
        strncpy(advice, "Для функций с возвращаемым типом int используйте return с значением.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0814(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if(condition);") != NULL) {
        strncpy(advice, "Избегайте лишней точки с запятой после if.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0815(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1) { }") != NULL) {
        strncpy(advice, "Используйте явное условие выхода из бесконечных циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0816(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a == b) return 1; else return 0;") != NULL) {
        strncpy(advice, "Можно упростить до 'return a == b;'", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0817(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "float f = 0.1;") != NULL) {
        strncpy(advice, "Для большей точности используйте double вместо float.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0818(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr == NULL) return; *ptr = 5;") != NULL) {
        strncpy(advice, "Проверка на NULL должна предшествовать разыменованию указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0819(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5] = {1,2};") != NULL) {
        strncpy(advice, "Инициализируйте все элементы массива для предотвращения неопределённого поведения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0820(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "const char *str = \"Hello\"; str[0] = 'h';") != NULL) {
        strncpy(advice, "Строковые литералы являются константными — не изменяйте их.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0821(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int) * n);") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0822(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { int x; }") != NULL && strstr(line, "return") != NULL) {
        strncpy(advice, "Функция void не должна возвращать значение.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0823(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; free(p);") != NULL && strstr(line, "*p") != NULL) {
        strncpy(advice, "Не обращайтесь к памяти после вызова free.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0824(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b) {") != NULL) {
        strncpy(advice, "Используйте оператор '==' для сравнения, '=' — присваивание.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0825(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch(x) { case 1: ...; default: ...; case 2: ...; }") != NULL) {
        strncpy(advice, "Порядок case и default в switch должен быть корректным для ясности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0826(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 5; a = 5;") != NULL) {
        strncpy(advice, "Избегайте лишних повторных присваиваний без изменения значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0827(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 1; if (x == 1) { int x = 2; }") != NULL) {
        strncpy(advice, "Избегайте теней переменных для уменьшения путаницы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0828(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[3] = {1,2,3,4};") != NULL) {
        strncpy(advice, "Инициализация массива с количеством элементов больше размера приводит к ошибке.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0829(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while(a == 0) { ... }") != NULL) {
        strncpy(advice, "Убедитесь, что условие выхода из цикла корректно.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0830(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr++;") != NULL) {
        strncpy(advice, "Правильно используйте оператор инкремента с указателями.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0831(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[] = \"hello\"; str[5] = '!';") != NULL) {
        strncpy(advice, "Индекс 5 выходит за пределы строки с длиной 5.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0832(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 10; if(a > 5) { int a = 0; }") != NULL) {
        strncpy(advice, "Избегайте скрытия переменных во вложенных блоках.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0833(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr = \"hello\"; ptr[0] = 'H';") != NULL) {
        strncpy(advice, "Изменение литералов строк запрещено.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0834(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; printf(\"%d\", x);") != NULL) {
        strncpy(advice, "Используйте инициализированные переменные перед выводом.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0835(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(0);") != NULL) {
        strncpy(advice, "malloc(0) поведение зависит от реализации — избегайте выделения нулевого размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0836(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *ptr = NULL; strcpy(ptr, \"text\");") != NULL) {
        strncpy(advice, "Не используйте strcpy с NULL указателем.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0837(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a == b) ;") != NULL) {
        strncpy(advice, "Избегайте пустых операторов после условия if.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0838(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i=0; i<10; i++) { }") != NULL && strstr(line, "i") == NULL) {
        strncpy(advice, "Объявляйте переменные цикла явно для лучшей читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0839(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; free(p); *p = 10;") != NULL) {
        strncpy(advice, "Не обращайтесь к памяти после освобождения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0840(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { return 1; }") != NULL) {
        strncpy(advice, "Функции void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0841(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Используйте fgets вместо небезопасной функции gets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0842(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; if(x = 1) { }") != NULL) {
        strncpy(advice, "В условиях используйте оператор сравнения '==' вместо '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0843(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); *p = 5;") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0844(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 5; int a = 10;") != NULL) {
        strncpy(advice, "Избегайте двойного определения одной и той же переменной в одной области видимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0845(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p; *p = 10;") != NULL && strstr(line, "p = NULL") == NULL) {
        strncpy(advice, "Инициализируйте указатели перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0846(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i=0; i < 10; i++) { }") != NULL) {
        strncpy(advice, "Используйте for с четко определенным условием выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0847(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = malloc(10); strcpy(str, \"Hello\");") != NULL && strstr(line, "if (str == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc перед использованием строки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0848(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; for(int i=0; i <= 5; i++) arr[i] = 0;") != NULL) {
        strncpy(advice, "Индексирование массива вне границ вызывает ошибки.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0849(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = \"abc\"; p[0] = 'A';") != NULL) {
        strncpy(advice, "Нельзя изменять строковые литералы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0850(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; printf(\"%d\", a);") != NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0851(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (x == 0 || x == 1 || x == 2)") {
        strncpy(advice, "Рассмотрите использование switch вместо длинных цепочек if-else для читаемости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0852(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr = malloc(sizeof(int)); free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Двойное освобождение памяти приводит к ошибкам — избегайте повторного free одного указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0853(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int i; for (i = 0; i < 10; i++) { ... }") != NULL && strstr(line, "i") == NULL) {
        strncpy(advice, "Объявляйте переменную цикла в пределах for для ограниченной области видимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0854(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x; x = x + 1;") != NULL && strstr(line, "x++") == NULL) {
        strncpy(advice, "Используйте инкремент (x++) для краткости, если не требуется сложная арифметика.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0855(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) { free(ptr); ptr = NULL; }") != NULL) {
        strncpy(advice, "После free рекомендуется обнулять указатель для предотвращения использования висячих указателей.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0856(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; fgets(buf, 100, stdin);") != NULL) {
        strncpy(advice, "Размер буфера в fgets не должен превышать размер массива.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0857(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { int x = 10; }") != NULL && strstr(line, "return x") != NULL) {
        strncpy(advice, "Функция void не должна возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0858(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 5;") != NULL) {
        strncpy(advice, "Разыменование NULL указателя вызывает ошибку — проверьте указатель перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0859(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[3] = {1, 2};") != NULL) {
        strncpy(advice, "Неинициализированные элементы массива могут содержать мусорные значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0860(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "strcpy(dest, src);") != NULL && strstr(line, "dest") != NULL && strstr(line, "src") != NULL) {
        strncpy(advice, "Для безопасного копирования строк используйте strncpy с указанием максимального размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0861(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 0; if(x = 1) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях, а не присваивание '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0862(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 5; if (a > 0) return 1; else return 0;") != NULL) {
        strncpy(advice, "Можно заменить if-else на return выражения условия.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0863(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = \"Hello\"; str[0] = 'h';") != NULL) {
        strncpy(advice, "Изменять строковые литералы нельзя — используйте массив char.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0864(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc перед использованием памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0865(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int) * n); free(p); p = NULL;") != NULL) {
        strncpy(advice, "Обнуляйте указатель после free для безопасности.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0866(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 10; int y = 20; int temp = x; x = y; y = temp;") != NULL) {
        strncpy(advice, "Для обмена значениями рассмотрите использование стандартных функций swap.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0867(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buf[10]; gets(buf);") != NULL) {
        strncpy(advice, "Функция gets небезопасна — используйте fgets.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0868(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr = NULL; *ptr = 10;") != NULL) {
        strncpy(advice, "Не разыменовывайте NULL указатели.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0869(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if(x == 5) { int x = 10; }") != NULL) {
        strncpy(advice, "Избегайте теней переменных в вложенных областях видимости.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0870(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i = 0; i <= 10; i++) { arr[i] = 0; }") != NULL) {
        strncpy(advice, "Индексирование массива не должно выходить за границы.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}


int after_example_0901(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 5;") != NULL && strstr(line, "ptr = malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0902(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[10]; strcpy(str, \"This is a very long string\");") != NULL) {
        strncpy(advice, "Избегайте переполнения буфера при копировании строк.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0903(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while(1) { }") != NULL) {
        strncpy(advice, "Избегайте бесконечных циклов без условий выхода.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0904(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; a = a++;") != NULL) {
        strncpy(advice, "Избегайте неопределенного поведения при использовании постинкремента в присваивании.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0905(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; if (*p) { }") != NULL) {
        strncpy(advice, "Проверяйте указатель на NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0906(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 10; if (x = 5) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо присваивания '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0907(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "FILE *f = fopen(\"file.txt\", \"r\"); if (f != NULL) { }") != NULL && strstr(line, "fclose(f);") == NULL) {
        strncpy(advice, "Закрывайте файлы после использования, чтобы избежать утечек ресурсов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0908(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; for (int i = 0; i <= 5; i++) arr[i] = 0;") != NULL) {
        strncpy(advice, "Индексирование массива должно быть строго меньше размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0909(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = \"Hello\"; p[0] = 'h';") != NULL) {
        strncpy(advice, "Строковые литералы неизменяемы — используйте массив char для модификаций.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0910(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int)); *p = 5;") != NULL && strstr(line, "if (p == NULL)") == NULL) {
        strncpy(advice, "Проверяйте результат malloc на NULL перед использованием памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0911(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "free(ptr); free(ptr);") != NULL) {
        strncpy(advice, "Избегайте двойного вызова free для одного указателя.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0912(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 10; int y = 20; int temp = x; x = y; y = temp;") != NULL) {
        strncpy(advice, "Для обмена значениями используйте функцию swap или XOR-обмен для оптимизации.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0913(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; gets(buffer);") != NULL) {
        strncpy(advice, "Функция gets небезопасна — замените на fgets с указанием размера буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0914(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = NULL; *p = 10;") != NULL) {
        strncpy(advice, "Проверяйте указатель на NULL перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0915(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a > b) { } else if (a > b) { }") != NULL) {
        strncpy(advice, "Избегайте дублирующихся условий в if-else цепочках.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0916(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "for (int i = 0; i < n; i++) { }") != NULL && strstr(line, "n") == NULL) {
        strncpy(advice, "Проверьте корректность диапазона цикла и переменную ограничения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0917(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"Hello\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0918(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "switch (x) { case 1: break; case 1: break; }") != NULL) {
        strncpy(advice, "Избегайте дублирующихся case в switch.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0919(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; printf(\"%d\", a);") != NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0920(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[5]; strcpy(str, \"HelloWorld\");") != NULL) {
        strncpy(advice, "Проверьте длину строки, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0921(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "Используйте sizeof для выделения памяти корректного размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0922(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) { free(ptr); }") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0923(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10) { }") != NULL) {
        strncpy(advice, "Используйте оператор '==' для сравнения, а не '='.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0924(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 5;") != NULL) {
        strncpy(advice, "Индексирование массива должно быть в пределах размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0925(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { return 5; }") != NULL) {
        strncpy(advice, "Функции void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0926(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while (a < 10) { }") != NULL && strstr(line, "a++") == NULL) {
        strncpy(advice, "Обновляйте переменные цикла, чтобы избежать бесконечных циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0927(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0928(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; strcpy(p, \"Hello\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0929(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (x = y) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0930(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; printf(\"%d\", a);") != NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0931(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[5]; strcpy(str, \"HelloWorld\");") != NULL) {
        strncpy(advice, "Проверьте длину строки, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0932(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "Используйте sizeof для выделения корректного размера памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0933(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) { free(ptr); }") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0934(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0935(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 5;") != NULL) {
        strncpy(advice, "Индексирование массива должно быть в пределах размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0936(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { return 5; }") != NULL) {
        strncpy(advice, "Функции с типом void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0937(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while (a < 10) { }") != NULL && strstr(line, "a++") == NULL) {
        strncpy(advice, "Обновляйте переменные цикла, чтобы избежать бесконечных циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0938(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0939(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; strcpy(p, \"Hello\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0940(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (x = y) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0941(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; printf(\"%d\", a);") != NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0942(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[5]; strcpy(str, \"HelloWorld\");") != NULL) {
        strncpy(advice, "Проверьте длину строки, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0943(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "Используйте sizeof для выделения корректного размера памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0944(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) { free(ptr); }") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0945(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0946(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 5;") != NULL) {
        strncpy(advice, "Индексирование массива должно быть в пределах размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0947(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { return 5; }") != NULL) {
        strncpy(advice, "Функции с типом void не должны возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0948(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while (a < 10) { }") != NULL && strstr(line, "a++") == NULL) {
        strncpy(advice, "Обновляйте переменные цикла, чтобы избежать бесконечных циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0949(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0950(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; strcpy(p, \"Hello\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0951(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 10;") != NULL && strstr(line, "ptr = malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0952(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; gets(buffer);") != NULL) {
        strncpy(advice, "Функция gets небезопасна — используйте fgets с указанием размера буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0953(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0954(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 100;") != NULL) {
        strncpy(advice, "Индекс массива должен быть в пределах размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0955(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void func() { return 1; }") != NULL) {
        strncpy(advice, "Функция с типом void не должна возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0956(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while (x < 10) { }") != NULL && strstr(line, "x++") == NULL) {
        strncpy(advice, "Обновляйте переменные цикла, чтобы избежать бесконечного цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0957(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0958(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"Hello\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0959(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0960(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; printf(\"%d\", a);") != NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0961(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[5]; strcpy(str, \"HelloWorld\");") != NULL) {
        strncpy(advice, "Проверьте длину строки, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0962(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "Используйте sizeof для выделения памяти корректного размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0963(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) { free(ptr); }") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0964(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0965(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 5;") != NULL) {
        strncpy(advice, "Индекс массива должен быть в пределах размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0966(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { return 5; }") != NULL) {
        strncpy(advice, "Функция void не должна возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0967(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while (a < 10) { }") != NULL && strstr(line, "a++") == NULL) {
        strncpy(advice, "Обновляйте переменные цикла, чтобы избежать бесконечных циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0968(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0969(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; strcpy(p, \"Hello\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0970(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (x = y) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0971(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; printf(\"%d\", a);") != NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0972(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[5]; strcpy(str, \"HelloWorld\");") != NULL) {
        strncpy(advice, "Проверьте длину строки, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0973(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "Используйте sizeof для выделения памяти корректного размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0974(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) { free(ptr); }") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0975(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0976(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 5;") != NULL) {
        strncpy(advice, "Индекс массива должен быть в пределах размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0977(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { return 5; }") != NULL) {
        strncpy(advice, "Функция void не должна возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0978(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while (a < 10) { }") != NULL && strstr(line, "a++") == NULL) {
        strncpy(advice, "Обновляйте переменные цикла, чтобы избежать бесконечных циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0979(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0980(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; strcpy(p, \"Hello\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0981(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *ptr; *ptr = 10;") != NULL && strstr(line, "ptr = malloc") == NULL) {
        strncpy(advice, "Инициализируйте указатель перед разыменованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0982(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char buffer[10]; gets(buffer);") != NULL) {
        strncpy(advice, "Функция gets небезопасна — используйте fgets с указанием размера буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0983(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (a = b) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0984(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[5]; arr[5] = 100;") != NULL) {
        strncpy(advice, "Индекс массива должен быть в пределах размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0985(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void func() { return 1; }") != NULL) {
        strncpy(advice, "Функция с типом void не должна возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0986(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "while (x < 10) { }") != NULL && strstr(line, "x++") == NULL) {
        strncpy(advice, "Обновляйте переменные цикла, чтобы избежать бесконечного цикла.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0987(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0988(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *str = NULL; strcpy(str, \"Hello\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0989(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0990(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a; printf(\"%d\", a);") != NULL) {
        strncpy(advice, "Инициализируйте переменные перед использованием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0991(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char str[5]; strcpy(str, \"HelloWorld\");") != NULL) {
        strncpy(advice, "Проверьте длину строки, чтобы избежать переполнения буфера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0992(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(10);") != NULL && strstr(line, "sizeof(int)") == NULL) {
        strncpy(advice, "Используйте sizeof для выделения памяти корректного размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0993(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (ptr != NULL) { free(ptr); }") != NULL && strstr(line, "ptr = NULL;") == NULL) {
        strncpy(advice, "Обнуляйте указатель после освобождения памяти.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0994(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int x = 5; if (x = 10) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' вместо '=' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0995(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int arr[10]; arr[10] = 5;") != NULL) {
        strncpy(advice, "Индекс массива должен быть в пределах размера.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0996(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "void foo() { return 5; }") != NULL) {
        strncpy(advice, "Функция void не должна возвращать значения.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0997(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int a = 0; while (a < 10) { }") != NULL && strstr(line, "a++") == NULL) {
        strncpy(advice, "Обновляйте переменные цикла, чтобы избежать бесконечных циклов.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0998(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "int *p = malloc(sizeof(int));") != NULL && strstr(line, "free(p);") == NULL) {
        strncpy(advice, "Освобождайте выделенную память после использования.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_0999(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "char *p = NULL; strcpy(p, \"Hello\");") != NULL) {
        strncpy(advice, "Выделите память для строки перед копированием.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}

int after_example_1000(const char* line, char* advice, size_t advice_len) {
    if (strstr(line, "if (x = y) { }") != NULL) {
        strncpy(advice, "Используйте оператор сравнения '==' в условиях.", advice_len - 1);
        advice[advice_len - 1] = '\0';
        return 0;
    }
    return 1;
}
