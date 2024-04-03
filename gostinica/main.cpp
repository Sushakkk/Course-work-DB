#include "mainwindow.h"  // Подключаем заголовочный файл MainWindow, который содержит объявление главного окна

#include <QApplication>   // Подключаем заголовочный файл QApplication для управления приложением
#include <QLocale>        // Подключаем заголовочный файл QLocale для работы с локализацией
#include <QTranslator>    // Подключаем заголовочный файл QTranslator для перевода интерфейса

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  // Создаем объект приложения QApplication, передавая аргументы командной строки

    QTranslator translator;  // Создаем объект переводчика QTranslator для перевода интерфейса
    const QStringList uiLanguages = QLocale::system().uiLanguages();  // Получаем список языков интерфейса пользователя
    for (const QString &locale : uiLanguages) {  // Проходим по списку языков
        const QString baseName = "test22_" + QLocale(locale).name();  // Формируем базовое имя файла перевода
        if (translator.load(":/i18n/" + baseName)) {  // Загружаем файл перевода по указанному пути
            a.installTranslator(&translator);  // Устанавливаем переводчик для приложения
            break;  // Прерываем цикл, если перевод загружен успешно
        }
    }

    MainWindow w;  // Создаем объект главного окна MainWindow
    w.show();  // Отображаем главное окно

    return a.exec();  // Запускаем цикл обработки событий приложения и возвращаем код возврата приложения по его завершении
}
