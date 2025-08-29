pipeline {
    agent any

    stages {
        stage('Checkout Code') {
            steps {
                git 'https://github.com/ashu501/Note_Portal.git'
            }
        }

        stage('Deploy to Tomcat') {
            steps {
                sh '''
                TOMCAT_PATH=/var/lib/tomcat9/webapps/Note_Portal

                rm -rf $TOMCAT_PATH/*
                mkdir -p $TOMCAT_PATH
                cp -r * $TOMCAT_PATH/
                '''
            }
        }

        stage('Publish Portal in Jenkins') {
            steps {
            publishHTML([
                allowMissing: false,
                alwaysLinkToLastBuild: true,
                keepAll: true,
                reportDir: '.',
                reportFiles: 'index.html',
                reportName: 'Notes Portal'
            ])
	
            }
        }
    }
}

