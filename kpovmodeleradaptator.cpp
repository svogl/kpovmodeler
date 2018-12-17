/*
 * This file was generated by dbusidl2cpp version 0.4
 * when processing input file org.kde.kpovmodeler.xml
 *
 * dbusidl2cpp is Copyright (C) 2006 Trolltech AS. All rights reserved.
 *
 * This is an auto-generated file.
 */

#include "kpovmodeleradaptator.h"
#include "kpovmodeleradaptator.moc"

KpovmodelerAdaptor::KpovmodelerAdaptor(QObject *parent)
   : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

KpovmodelerAdaptor::~KpovmodelerAdaptor()
{
    // destructor
}

QString KpovmodelerAdaptor::activeObjectName()
{
    // handle method call org.kde.kpovmodeler.activeObjectName
    QString out0;
    QMetaObject::invokeMethod(parent(), "activeObjectName", Q_RETURN_ARG(QString, out0));

    // Alternative:
    //out0 = static_cast<YourObjectType *>(parent())->activeObjectName();
    return out0;
}

void KpovmodelerAdaptor::clearSelection()
{
    // handle method call org.kde.kpovmodeler.clearSelection
    QMetaObject::invokeMethod(parent(), "clearSelection");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->clearSelection();
}

void KpovmodelerAdaptor::closeDocument()
{
    // handle method call org.kde.kpovmodeler.closeDocument
    QMetaObject::invokeMethod(parent(), "closeDocument");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->closeDocument();
}

void KpovmodelerAdaptor::deleteContents()
{
    // handle method call org.kde.kpovmodeler.deleteContents
    QMetaObject::invokeMethod(parent(), "deleteContents");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->deleteContents();
}

QStringList KpovmodelerAdaptor::getObjectTypes()
{
    // handle method call org.kde.kpovmodeler.getObjectTypes
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "getObjectTypes", Q_RETURN_ARG(QStringList, out0));

    // Alternative:
    //out0 = static_cast<YourObjectType *>(parent())->getObjectTypes();
    return out0;
}

QStringList KpovmodelerAdaptor::getProperties()
{
    // handle method call org.kde.kpovmodeler.getProperties
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "getProperties", Q_RETURN_ARG(QStringList, out0));

    // Alternative:
    //out0 = static_cast<YourObjectType *>(parent())->getProperties();
    return out0;
}

void KpovmodelerAdaptor::initDocument()
{
    // handle method call org.kde.kpovmodeler.initDocument
    QMetaObject::invokeMethod(parent(), "initDocument");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->initDocument();
}

void KpovmodelerAdaptor::newDocument()
{
    // handle method call org.kde.kpovmodeler.newDocument
    QMetaObject::invokeMethod(parent(), "newDocument");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->newDocument();
}

bool KpovmodelerAdaptor::setActiveObject(const QString &name)
{
    // handle method call org.kde.kpovmodeler.setActiveObject
    bool out0;
    QMetaObject::invokeMethod(parent(), "setActiveObject", Q_RETURN_ARG(bool, out0), Q_ARG(QString, name));

    // Alternative:
    //out0 = static_cast<YourObjectType *>(parent())->setActiveObject(name);
    return out0;
}

bool KpovmodelerAdaptor::setProperty(const QString &property, const QString &value)
{
    // handle method call org.kde.kpovmodeler.setProperty
    bool out0;
    QMetaObject::invokeMethod(parent(), "setProperty", Q_RETURN_ARG(bool, out0), Q_ARG(QString, property), Q_ARG(QString, value));

    // Alternative:
    //out0 = static_cast<YourObjectType *>(parent())->setProperty(property, value);
    return out0;
}

void KpovmodelerAdaptor::slotEditCopy()
{
    // handle method call org.kde.kpovmodeler.slotEditCopy
    QMetaObject::invokeMethod(parent(), "slotEditCopy");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->slotEditCopy();
}

void KpovmodelerAdaptor::slotEditCut()
{
    // handle method call org.kde.kpovmodeler.slotEditCut
    QMetaObject::invokeMethod(parent(), "slotEditCut");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->slotEditCut();
}

void KpovmodelerAdaptor::slotEditDelete()
{
    // handle method call org.kde.kpovmodeler.slotEditDelete
    QMetaObject::invokeMethod(parent(), "slotEditDelete");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->slotEditDelete();
}

void KpovmodelerAdaptor::slotEditPaste()
{
    // handle method call org.kde.kpovmodeler.slotEditPaste
    QMetaObject::invokeMethod(parent(), "slotEditPaste");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->slotEditPaste();
}

void KpovmodelerAdaptor::slotNewObject(const QString &type, const QString &pos)
{
    // handle method call org.kde.kpovmodeler.slotNewObject
    QMetaObject::invokeMethod(parent(), "slotNewObject", Q_ARG(QString, type), Q_ARG(QString, pos));

    // Alternative:
    //static_cast<YourObjectType *>(parent())->slotNewObject(type, pos);
}

void KpovmodelerAdaptor::slotRender()
{
    // handle method call org.kde.kpovmodeler.slotRender
    QMetaObject::invokeMethod(parent(), "slotRender");

    // Alternative:
    //static_cast<YourObjectType *>(parent())->slotRender();
}

