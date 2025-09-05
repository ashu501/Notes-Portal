pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/ashu501/Notes-Portal.git'
            }
        }

        stage('Deploy') {
            steps {
                sh '''
                    mkdir -p deployed_site
                    cp -r *.html deployed_site/ || true
                    cp -r assets deployed_site/ || true
                    cp -r notes deployed_site/ || true
                    cp -r c-programs deployed_site/ || true
                    cp -r python-programs deployed_site/ || true
                '''
            }
        }
    }

    post {
        success {
            publishHTML(target: [
                allowMissing: false,
                keepAll: true,
                reportDir: 'deployed_site',
                reportFiles: 'index.html',
                reportName: 'Notes Portal Website'
            ])
        }
    }
}
