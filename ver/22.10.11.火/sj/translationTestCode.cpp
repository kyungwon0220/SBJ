QString name = ui.lineEdit_7->text();
QByteArray bytes = name.toLocal8Bit();
const char* name_hangul = bytes.data();