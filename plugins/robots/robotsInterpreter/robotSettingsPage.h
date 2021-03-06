#pragma once

#include "../../../../qrgui/dialogs/preferencesPages/preferencesPage.h"

#include "sensorConstants.h"

namespace Ui {
	class PreferencesRobotSettingsPage;
}

namespace qReal {
namespace interpreters {
namespace robots {

/// Preferences page for robots interpreter plugin
class PreferencesRobotSettingsPage : public PreferencesPage
{
	Q_OBJECT

public:
	explicit PreferencesRobotSettingsPage(QWidget *parent = 0);
	~PreferencesRobotSettingsPage();

	void save();

	QString selectedPortName() const;
	QString selectedCommunication() const;

protected:
	void changeEvent(QEvent *e);

private slots:
	void activatedUnrealModel(bool checked);
	void manualComPortCheckboxChecked(bool state);

private:
	void initRobotModelType(robotModelType::robotModelTypeEnum type);
	void initTypeOfCommunication(QString type);

	sensorType::SensorTypeEnum selectedPort1Sensor() const;
	sensorType::SensorTypeEnum selectedPort2Sensor() const;
	sensorType::SensorTypeEnum selectedPort3Sensor() const;
	sensorType::SensorTypeEnum selectedPort4Sensor() const;
	robotModelType::robotModelTypeEnum selectedRobotModel() const;

	Ui::PreferencesRobotSettingsPage *mUi;
};

}
}
}
