#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Mahasiswa.h"
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_btnProses_clicked() {
    const int NILAI_MINIMUM = 60;

    QStringList nilaiText = ui->txtNilai->toPlainText().split(" ");
    vector<int> nilai;

    for (QString s : nilaiText) {
        nilai.push_back(s.toInt());
    }

    int totalI = totalNilaiIteratif(nilai);
    int totalR = totalNilaiRekursif(nilai, nilai.size());

    double rata = (double) totalI / nilai.size();

    ui->lblIteratif->setText(QString::number(totalI));
    ui->lblRekursif->setText(QString::number(totalR));
    ui->lblRata->setText(QString::number(rata));

    if (rata >= NILAI_MINIMUM)
        ui->lblStatus->setText("LULUS");
    else
        ui->lblStatus->setText("TIDAK LULUS");
}
