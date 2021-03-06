#pragma once

#include <QtCore/QString>

#include <qrgui/mainwindow/mainWindowInterpretersInterface.h>

#include <gmock/gmock.h>

namespace qrTest {

class MainWindowInterpretersInterfaceMock : public qReal::gui::MainWindowInterpretersInterface
{
public:
	MOCK_METHOD1(selectItem, void(qReal::Id const &graphicalId));
	MOCK_METHOD1(selectItemOrDiagram, void(qReal::Id const &graphicalId));
	MOCK_METHOD3(highlight, void(qReal::Id const &graphicalId, bool exclusive, QColor const &color));
	MOCK_METHOD1(dehighlight, void(qReal::Id const &graphicalId));
	MOCK_METHOD0(dehighlight, void());
	MOCK_METHOD0(errorReporter, qReal::ErrorReporterInterface *());
	MOCK_METHOD0(activeDiagram, qReal::Id());
	MOCK_METHOD1(openSettingsDialog, void(QString const &tab));
	MOCK_METHOD0(reinitModels, void());
	MOCK_METHOD0(windowWidget, QWidget *());
	MOCK_METHOD1(unloadPlugin, bool(QString const &pluginName));
	MOCK_METHOD2(loadPlugin, bool(QString const &fileName, QString const &pluginName));
	MOCK_METHOD1(pluginLoaded, bool(QString const &pluginName));
	MOCK_METHOD1(saveDiagramAsAPictureToFile, void(QString const &fileName));
	MOCK_METHOD2(arrangeElementsByDotRunner, void(QString const &algorithm, QString const &absolutePathToDotFiles));
	MOCK_METHOD0(selectedElementsOnActiveDiagram, qReal::IdList());
	MOCK_METHOD2(activateItemOrDiagram, void(qReal::Id const &id, bool setSelected));
	MOCK_METHOD0(updateActiveDiagram, void());
	MOCK_METHOD1(deleteElementFromDiagram, void(qReal::Id const &id));
	MOCK_METHOD1(reportOperation, void(invocation::LongOperation *operation));
	MOCK_METHOD0(currentTab, QWidget *());
	MOCK_METHOD2(openTab, void(QWidget *tab, QString const &title));
	MOCK_METHOD1(closeTab, void(QWidget *tab));
	MOCK_METHOD0(beginPaletteModification, void());
	MOCK_METHOD2(setElementInPaletteVisible, void(qReal::Id const &metatype, bool visible));
	MOCK_METHOD1(setVisibleForAllElementsInPalette, void(bool visible));
	MOCK_METHOD2(setElementInPaletteEnabled, void(qReal::Id const &metatype, bool enabled));
	MOCK_METHOD1(setEnabledForAllElementsInPalette, void(bool enabled));
	MOCK_METHOD0(endPaletteModification, void());
};

}
