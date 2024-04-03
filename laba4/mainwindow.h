#ifndef MAINWINDOW_H  // Предотвращаем множественное включение заголовочного файла
#define MAINWINDOW_H

#include <QMainWindow>      // Подключаем заголовочный файл QMainWindow для создания главного окна
#include <QSqlDatabase>     // Подключаем заголовочный файл QSqlDatabase для работы с базой данных

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow  // Определение класса главного окна, наследующегося от QMainWindow
{
    Q_OBJECT  // Макрос для поддержки механизма сигналов и слотов в Qt

public:
    explicit MainWindow(QWidget *parent = nullptr);  // Конструктор главного окна
    ~MainWindow();  // Деструктор главного окна

private slots:  // Приватный раздел для слотов
    void dbconnect();  // Слот для установки соединения с базой данных
    void selectAll();  // Слот для выборки всех записей из базы данных
    void add();  // Слот для добавления новой записи в базу данных
    void remove();  // Слот для удаления выбранной записи из базы данных
    void edit();
    void del();
    void on_twOrg_itemSelectionChanged();

private:
    Ui::MainWindow *ui;  // Указатель на объект пользовательского интерфейса
    QSqlDatabase dbconn;  // Объект для работы с базой данных
};

#endif // MAINWINDOW_H  // Завершение условной компиляции и предотвращение множественного включения
