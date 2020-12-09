#include <QApplication>
#include <QDialog>

int main(int argc, char** argv) {
  QApplication app(argc, argv);
  QDialog dialog;
  dialog.exec();
  return 0;
}
