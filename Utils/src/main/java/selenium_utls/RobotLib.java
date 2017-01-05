package selenium_utls;

import java.awt.AWTException;
import java.awt.Robot;
import java.awt.event.KeyEvent;

import org.apache.log4j.LogManager;
import org.apache.log4j.Logger;

public class RobotLib {

	static Logger log = LogManager.getLogger(RobotLib.class);

	static Robot robot;

	public static void handlePopup() {
		try {
			// Initialize.
			robot = new Robot();
			// Pressing Escape for Browser Alert.
			robot.keyPress(KeyEvent.VK_ESCAPE);
			robot.keyRelease(KeyEvent.VK_ESCAPE);
		} catch (AWTException e) {
			log.info(e.getMessage());
		}
		log.info("pop up is handled ");
	}

	public static void fileDownload() {

		try {
			robot = new Robot();
		} catch (AWTException e) {
			log.info(e.getMessage());
		}

	}

}