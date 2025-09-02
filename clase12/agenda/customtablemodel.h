#ifndef CUSTOMTABLEMODEL_H
#define CUSTOMTABLEMODEL_H

#include <QApplication>
#include <QTableView>
#include <QAbstractTableModel>

class CustomTableModel : public QAbstractTableModel {
    Q_OBJECT

public:
    CustomTableModel(QObject *parent = nullptr) : QAbstractTableModel(parent) {}

    int rowCount(const QModelIndex &parent = QModelIndex()) const override {
        return 5; // Número de filas
    }

    int columnCount(const QModelIndex &parent = QModelIndex()) const override {
        return 2; // Número de columnas
    }

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override {
        //if (role == Qt::DisplayRole) {
            return QString("Dato %1,%2").arg(index.row()).arg(index.column());
        //}
        //return QVariant();
    }
};


#endif // CUSTOMTABLEMODEL_H
